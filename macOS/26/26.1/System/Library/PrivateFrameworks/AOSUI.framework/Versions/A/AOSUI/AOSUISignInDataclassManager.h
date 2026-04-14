@class AADataclassManager;

@interface AOSUISignInDataclassManager : NSObject {
    AADataclassManager *_aaDataclassManager;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_aaDataclassManager;
- (void)_enableDataClass:(id)a0 forAccount:(id)a1 window:(id)a2 completion:(id /* block */)a3;
- (id)_listStringFromAppNames:(id)a0;
- (void)_populateDataclassesToEnableAnyway:(id)a0 dataclassActionsForMerge:(id)a1 userDefaultDisabledDataclasses:(id)a2 appNames:(id)a3 fromServices:(id)a4 forAccount:(id)a5;
- (void)enableDataclassesAfterSignInForAccount:(id)a0 window:(id)a1 completion:(id /* block */)a2;
- (void)enableFindMyAfterSignInForAccount:(id)a0 window:(id)a1 shouldAvoidUI:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithAADataclassManager:(id)a0;

@end
