@class NSString, ISUniqueOperationContext, NSMutableArray, NSLock;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
    ISUniqueOperationContext *_activeContext;
    NSMutableArray *_contexts;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)a0;

- (void)uniqueOperationFinished:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)_activeContext;
- (id)init;
- (void)checkInOperation:(id)a0;
- (id)predecessorForKey:(id)a0 operation:(id)a1;
- (id)_contextForOperation:(id)a0;
- (void)checkOutOperation:(id)a0;
- (void)setPredecessorIfNeeded:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
