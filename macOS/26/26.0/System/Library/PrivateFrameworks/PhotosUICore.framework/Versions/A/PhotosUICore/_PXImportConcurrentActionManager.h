@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray *_operations;
}

+ (id)sharedInstance;

- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
