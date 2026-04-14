@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (void)start;
- (void)setWidth:(id)a0;
- (void)setHeight:(id)a0;
- (id)width;
- (id)height;
- (void)stop;
- (id)direction;
- (id)behavior;
- (void)setBehavior:(id)a0;
- (void)setDirection:(id)a0;
- (unsigned int)hspace;
- (void)setHspace:(unsigned int)a0;
- (unsigned int)vspace;
- (void)setVspace:(unsigned int)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (int)loop;
- (void)setLoop:(int)a0;
- (unsigned int)scrollAmount;
- (void)setScrollAmount:(unsigned int)a0;
- (unsigned int)scrollDelay;
- (void)setScrollDelay:(unsigned int)a0;
- (BOOL)trueSpeed;
- (void)setTrueSpeed:(BOOL)a0;

@end
