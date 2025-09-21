@interface OSACommandHandlerElement : OSAHandlerElement

+ (id)elementWithCommand:(id)a0;
+ (id)elementWithCommand:(id)a0 parameters:(id)a1;

- (id)command;
- (void)dealloc;
- (void)setCommand:(id)a0;
- (id)initWithCommand:(id)a0;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned int)a1;
- (id)initWithCommand:(id)a0 parameters:(id)a1;

@end
