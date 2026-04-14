@interface HomeDataModel.HomeManagerActor : SwiftNativeNSObject <HMHomeManagerDelegate> {
    void /* unknown type, empty encoding */ homeHasUpdatedOnce;
    void /* unknown type, empty encoding */ blocks;
    void /* unknown type, empty encoding */ target;
    void /* unknown type, empty encoding */ internalHomeManager;
}

- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;

@end
