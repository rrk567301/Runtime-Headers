@class CNContactStore, GEOObserverHashTable, NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface MUContactStore : NSObject {
    CNContactStore *_cnContactStore;
    BOOL _needsRefetch;
    NSObject<OS_dispatch_queue> *_queue;
    GEOObserverHashTable *_observers;
    geo_isolater *_propertyIsolator;
}

@property (readonly, nonatomic) CNContactStore *cnContactStore;
@property (readonly, nonatomic) BOOL isGuardianRestrictedCNContainer;
@property (readonly, nonatomic) BOOL hasContactAccess;

- (void)unregisterObserver:(id)a0;
- (id)init;
- (void)_contactStoreDidChange;
- (void).cxx_destruct;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (BOOL)_calculateIfContainerIsGuardianRestricted;
- (void)_invokeObservers;
- (void)fetchContactForPickerDisplayUsingContact:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchStoredContactForMatchingMapItem:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)fetchUnifiedContactForIdentifier:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (void)removeMapsDataFromContact:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;

@end
