@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (id)direction;
- (id)behavior;
- (void)start;
- (void)stop;
- (id)width;
- (void)setHeight:(id)a0;
- (void)setBehavior:(id)a0;
- (id)height;
- (void)setDirection:(id)a0;
- (void)setWidth:(id)a0;
- (id)bgColor;
- (void)setScrollDelay:(unsigned int)a0;
- (unsigned int)hspace;
- (int)loop;
- (unsigned int)scrollAmount;
- (unsigned int)scrollDelay;
- (void)setBgColor:(id)a0;
- (void)setHspace:(unsigned int)a0;
- (void)setLoop:(int)a0;
- (void)setScrollAmount:(unsigned int)a0;
- (void)setTrueSpeed:(BOOL)a0;
- (void)setVspace:(unsigned int)a0;
- (BOOL)trueSpeed;
- (unsigned int)vspace;

@end
