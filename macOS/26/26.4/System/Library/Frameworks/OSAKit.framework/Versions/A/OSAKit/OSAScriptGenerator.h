@class OSAScriptElement, NSMutableString;

@interface OSAScriptGenerator : NSObject {
    OSAScriptElement *_element;
    NSMutableString *_text;
    BOOL _needsGeneration;
}

+ (id)generatorWithElement:(id)a0;

- (id)element;
- (void)setElement:(id)a0;
- (id)init;
- (id)text;
- (void)dealloc;
- (id)initWithElement:(id)a0;
- (BOOL)generate;
- (BOOL)needsGeneration;
- (void)setNeedsGeneration:(BOOL)a0;

@end
