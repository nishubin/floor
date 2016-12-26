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
$z[5]=Array("list","\r\n                      [field:global runphp='yes' name=autoindex]\r\n                      \$a=\"\r\n                      <li class='col-3-1 not-animated last' data-animate='fadeInUp' >\";\r\n                        \$b=\"\r\n                      \r\n                      <li class='col-3-1 not-animated' data-animate='fadeInUp'>\";\r\n                        if ((@me%3)==0 && @me!=12)  @me=\$a;\r\n                        else  @me=\$b;\r\n                        [/field:global]\r\n                        <div class=\"portfolio-img\"><a href=\"[field:arcurl/]\" target=\"_blank\"><img src=\"[field:picname/]\" style=\"width: 313px; height: 235px;\"  alt=\"[field:title/]\" /></a></div>\r\n                        <div class=\"portfolio-title\">\r\n                          <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                        </div>\r\n                      </li>\r\n                      ",5154,6083);
$z[5][4]['pagesize']="9";
$z[6]=Array("pagelist","",6309,6375);
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[6][4]['listsize']="2";
$z[7]=Array("include","",6715,6752);
$z[7][4]['filename']="footer.htm";
$z[8]=Array("include","",7053,7091);
$z[8][4]['filename']="footer1.htm";

?>