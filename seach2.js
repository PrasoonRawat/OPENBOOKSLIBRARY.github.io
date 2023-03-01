const search = () => {
    const searchbox = document.getElementById("search-item").ariaValueMax.toUpperCase();
    const storeitems = document.getElementById("product-list")
    const product = document.querySelectorAll("product")
    const pname = storeitems.getElementsByTagName("h2")

    for(var i=0; i < pname.length;i++){
        let match = product[i].getElementsByTagName('h2')[0];

        if(match){
            let textvalue = match.textcontent || match.innerhtml

            if(textvalue.toUpperCase().indexof(searchbox) > -1){
                product[i].style.display = "";
            }else{
                product[i].style.display = "none";
            }
        }
    }
}