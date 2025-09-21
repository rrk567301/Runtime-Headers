@class NSMutableArray;

@interface LWCRTypeErrorContext : NSObject {
    NSMutableArray *keyContext;
    unsigned int code;
}

- (id)init;
- (void)setError:(unsigned int)a0;
- (void).cxx_destruct;
- (void)popKey;
- (void)pushKey:(id)a0;
- (id)synthesizeError;

@end
