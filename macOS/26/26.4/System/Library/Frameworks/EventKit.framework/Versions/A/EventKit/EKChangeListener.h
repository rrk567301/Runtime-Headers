@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (id)changedIdentifiersForNotification:(id)a0;
+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;
+ (BOOL)isSyncStatusChangeNotification:(id)a0;

- (void)registerDelegate:(id)a0;
- (id)_orderedDelegates;
- (void).cxx_destruct;
- (id)init;
- (void)objectsChangedNotification:(id)a0;

@end
