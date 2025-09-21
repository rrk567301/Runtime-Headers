@class MFMessageThread;

@interface MFInMemoryThread_macOS : EDInMemoryThread

@property (readonly) MFMessageThread *messageThread;

- (void).cxx_destruct;
- (id)addMessages:(id)a0;
- (id)initWithMessages:(id)a0 originatingQuery:(id)a1 threadScope:(id)a2;
- (id)removeMessages:(id)a0 threadIsEmpty:(BOOL *)a1;

@end
