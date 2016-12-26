[field:global runphp='yes' name=autoindex]
                      $a="
                      <li class='col-3-1 last not-animated' data-animate='fadeInUp' >";
                        $b="
                      
                      <li class='col-3-1 not-animated' data-animate='fadeInUp'>";
                        if ((@me%3)==0 && @me!=12)  @me=$a;
                        else  @me=$b;
                        [/field:global]
                        <div class="portfolio-img"><a  href="[field:arcurl/]" title="[field:title/]"><img src="[field:picname/]" style="width: 313px; height: 235px;" alt="[field:title/]" /><span class="opacity-overlay"><i class="icon-video"></i></span></a></div>
                        <div class="portfolio-title">
                          <h2><a href="[field:arcurl/]"  title="[field:title/]">[field:title/]</a></h2>
                        </div>
                      </li>