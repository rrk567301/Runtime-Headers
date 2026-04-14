@class NSMutableDictionary, JSContext;

@interface JSValuePrivateProperties : NSObject {
    JSContext *_context;
}

@property (readonly, retain) NSMutableDictionary *dictionary;

- (id)initWithContext:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void).cxx_destruct;

@end
