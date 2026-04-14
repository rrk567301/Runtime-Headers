@class NSMutableArray;

@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray *_operations;
}

+ (id)sharedInstance;

- (void)removeOperation:(id)a0;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
