<!-- S entry-item -->
                      <div class="entry-item">
                        <div class="time">
                          <p class="time-day">[field:pubdate function="MyDate('d',@me)"/]</p>
                          <p class="time-date">[field:pubdate function="MyDate('Y-m',@me)"/]</p>
                        </div>
                        <div class="entry-title">
                          <h2><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h2>
                        </div>
                        <div class="entry-summary">
                          <div class="qhd-content">
                            <p> [field:description function="cn_substr(@me,180)"/]...</p>
                          </div>
                        </div>
                      </div>
                      <!-- E entry-item -->