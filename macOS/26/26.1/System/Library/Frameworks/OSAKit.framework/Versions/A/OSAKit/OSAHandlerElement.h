@class NSString;

@interface OSAHandlerElement : OSAScriptElement {
    NSString *_parameters;
}

+ (id)elementWithName:(id)a0;
+ (id)elementWithName:(id)a0 parameters:(id)a1;

- (void)setParameters:(id)a0;
- (void)dealloc;
- (id)title;
- (id)initWithName:(id)a0;
- (id)parameters;
- (id)initWithName:(id)a0 parameters:(id)a1;
- (BOOL)generateIntoText:(id)a0 indent:(unsigned int)a1;

@end
