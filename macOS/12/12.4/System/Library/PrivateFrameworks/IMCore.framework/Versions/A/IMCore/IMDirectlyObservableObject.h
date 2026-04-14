@class NSArray;

@interface IMDirectlyObservableObject : NSObject

@property (retain) NSArray *observers;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)informObserversOfNotification:(id)a0;
- (void)_objectDidPostNotification:(id)a0;

@end
