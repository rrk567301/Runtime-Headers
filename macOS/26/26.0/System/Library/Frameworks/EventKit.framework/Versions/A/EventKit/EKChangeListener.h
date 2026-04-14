@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;
+ (id)changedIdentifiersForNotification:(id)a0;
+ (BOOL)isSyncStatusChangeNotification:(id)a0;

- (id)_orderedDelegates;
- (void)registerDelegate:(id)a0;
- (id)init;
- (void)objectsChangedNotification:(id)a0;
- (void).cxx_destruct;

@end
