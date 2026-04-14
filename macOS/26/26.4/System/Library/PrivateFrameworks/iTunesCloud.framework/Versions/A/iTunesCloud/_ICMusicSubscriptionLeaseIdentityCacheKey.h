@class NSNumber, NSString;

@interface _ICMusicSubscriptionLeaseIdentityCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSNumber *delegatedDSID;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDSID:(id)a0 carrierBundleDeviceIdentifier:(id)a1 delegatedDSID:(id)a2;

@end
