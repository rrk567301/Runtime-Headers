@class OSAScriptElement, NSMutableString;

@interface OSAScriptGenerator : NSObject {
    OSAScriptElement *_element;
    NSMutableString *_text;
    char _needsGeneration;
}

+ (id)generatorWithElement:(id)a0;

- (void)dealloc;
- (id)init;
- (id)element;
- (id)initWithElement:(id)a0;
- (void)setElement:(id)a0;
- (id)text;
- (char)generate;
- (char)needsGeneration;
- (void)setNeedsGeneration:(char)a0;

@end
