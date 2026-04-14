@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CDBCommonEntityFunctionalityHandler : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lock;
@property (retain, nonatomic) NSMutableSet *destructionObservers;

+ (void)_notifyDestructionObservers:(id)a0;

- (void).cxx_destruct;
- (void)removeDestructionObserver:(struct CalRelation { } *)a0;
- (void)addDestructionObserver:(struct CalRelation { } *)a0;
- (void)notifyOfEntityDestruction;
- (id)init;
- (void)dealloc;

@end
