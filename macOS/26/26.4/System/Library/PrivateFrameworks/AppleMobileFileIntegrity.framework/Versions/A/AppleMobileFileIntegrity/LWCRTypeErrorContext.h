@class NSMutableArray;

@interface LWCRTypeErrorContext : NSObject {
    NSMutableArray *keyContext;
    unsigned int code;
}

- (void).cxx_destruct;
- (id)init;
- (void)setError:(unsigned int)a0;
- (void)popKey;
- (void)pushKey:(id)a0;
- (id)synthesizeError;

@end
