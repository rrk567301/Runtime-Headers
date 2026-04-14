@interface PhotosUICore.InternalSettingsObserver : NSObject <PXSettingsKeyObserver> {
    void /* unknown type, empty encoding */ changeHandler;
}

- (id)init;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void).cxx_destruct;

@end
