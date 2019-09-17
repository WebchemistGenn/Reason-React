/* header.re */

[@react.component]
let make = (~title) =>
  <div>
    <h1> {React.string(title)} </h1>
    <div onClick={_ => ReasonReactRouter.push("/")}> {React.string("Home")} </div>
    <div onClick={_ => ReasonReactRouter.push("/about")}> {React.string("About")} </div>
  </div>;