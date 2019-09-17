/* app.re */

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  let view =
    switch (url.path) {
    | [] => <Home />
    | ["about"] => <About />
    | _ => <div> {"Page not found :/" |> ReasonReact.string} </div>
    };

  <div> <Header title="Reason React TodoList" /> <div> view </div> </div>;
};