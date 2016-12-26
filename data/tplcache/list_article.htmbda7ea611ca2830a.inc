<?php
$z[0]=Array("field","",331,350);
$z[0][4]['name']="title";
$z[1]=Array("global","",351,377);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",418,447);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",487,545);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",2960,2995);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",4655,4713);
$z[5][4]['name']="typeid";
$z[5][4]['function']="GetTopTypename(@me)";
$z[6]=Array("channel","\r\n                          <li class=\"\"><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n                          ",5681,5978);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='active'><a href='~typelink~' >~typename~</a></li>";
$z[7]=Array("list","\r\n                      [field:global runphp='yes' name=autoindex]\r\n                      \$a=\"\r\n                      <li class='col-4-1 last not-animated' data-animate='fadeInUp' >\";\r\n                        \$b=\"\r\n                      \r\n                      <li class='col-4-1 not-animated' data-animate='fadeInUp'>\";\r\n                        if ((@me%4)==0 && @me!=16)  @me=\$a;\r\n                        else  @me=\$b;\r\n                        [/field:global]\r\n                        <div class=\"product-item\">\r\n                          <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\"  style=\"width: 228px; height: 228px;\" alt=\"[field:title/]\" /></a></div>\r\n                          <div class=\"portfolio-title\">\r\n                            <h2><a href=\"[field:arcurl/]N\" target=\"_blank\">[field:title/]</a></h2>\r\n                          </div>\r\n                        </div>\r\n                      </li>\r\n                      ",6646,7668);
$z[7][4]['pagesize']="8";
$z[8]=Array("pagelist","",7894,7960);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="2";
$z[9]=Array("include","",8341,8378);
$z[9][4]['filename']="footer.htm";
$z[10]=Array("include","",8679,8717);
$z[10][4]['filename']="footer1.htm";

?>