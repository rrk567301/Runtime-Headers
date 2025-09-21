@class NSString, NSMutableDictionary, JSContext;

@interface JSStorageScriptContext : NSObject

@property (retain) NSMutableDictionary *info;
@property (retain) NSString *script;
@property (retain) JSContext *context;
@property BOOL isEvaluating;
@property BOOL scriptHasBeenExecuted;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithScript:(id)a0;
- (long long)getValueForInfoSelector:(unsigned int)a0;
- (void)setValue:(long long)a0 forInfoSelector:(unsigned int)a1;

@end
