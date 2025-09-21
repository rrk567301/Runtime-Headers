@class HMDMediaOutputDevice;

@interface HMDMediaAccessoryAdvertisement : HMDAccessoryAdvertisement <HMDWACAccessoryAssociation> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMDMediaOutputDevice *outputDevice;
@property (getter=isAssociated) char associated;

+ (char)canAirPortExpressSupportMediaAccessory:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithOutputDevice:(id)a0;
- (long long)associationOptions;
- (char)matchesWACDeviceID:(id)a0;

@end
