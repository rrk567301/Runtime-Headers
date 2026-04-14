@class NSPointerArray;

@interface EKChangeListener : NSObject

@property (retain) NSPointerArray *delegates;

+ (id)updatedObjectFor:(id)a0 changeNotification:(id)a1;
+ (id)relatedItemFor:(id)a0 changeNotification:(id)a1;
+ (id)changedIdentifiersForNotification:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerDelegate:(id)a0;
- (void)objectsChangedNotification:(id)a0;
- (id)_orderedDelegates;

@end
