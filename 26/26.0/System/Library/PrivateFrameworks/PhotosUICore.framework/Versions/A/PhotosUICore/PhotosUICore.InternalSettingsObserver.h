@interface PhotosUICore.InternalSettingsObserver : NSObject <PXSettingsKeyObserver> {
    void /* unknown type, empty encoding */ changeHandler;
}

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
