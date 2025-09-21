@class HKHealthStore, NSMutableDictionary;

@interface HKUnitPreferenceController : NSObject {
    NSMutableDictionary *_unitPreferencesByObjectType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

+ (void)unitPreferenceControllerWithHealthStore:(id)a0 completion:(id /* block */)a1;

- (void)dealloc;
- (id)initWithHealthStore:(id)a0;
- (void)_localeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_unitPreferencesDidUpdate:(id)a0;
- (id)unitForObjectType:(id)a0;
- (void)updatePreferredUnit:(id)a0 forObjectType:(id)a1;

@end
