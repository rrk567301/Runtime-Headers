@interface PhotosUICore.InternalSettingsObserver : NSObject <PXSettingsKeyObserver> {
    void /* unknown type, empty encoding */ changeHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)settings:(id)a0 changedValueForKey:(id)a1;

@end
