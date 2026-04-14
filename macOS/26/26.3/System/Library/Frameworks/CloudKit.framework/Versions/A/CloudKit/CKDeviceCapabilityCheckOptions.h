@class NSString, NSDate;

@interface CKDeviceCapabilityCheckOptions : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) BOOL excludeDevicesWithoutCapabilityCheckingSupport;
@property (nonatomic, readonly) NSDate *excludeZoneAccessBefore;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExcludeDevicesWithoutCapabilityCheckingSupport:(BOOL)a0 excludeZoneAccessBefore:(id)a1;

@end
