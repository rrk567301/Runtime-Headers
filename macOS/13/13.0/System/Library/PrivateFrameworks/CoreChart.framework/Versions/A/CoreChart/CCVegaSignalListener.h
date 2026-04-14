@class JSValue;

@interface CCVegaSignalListener : NSObject

@property (retain) JSValue *callback;

- (void).cxx_destruct;
- (id)initWithCallback:(id)a0;

@end
