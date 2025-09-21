@class NSString, NSDate;

@interface CKDeviceCapabilityCheckOptions : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) char excludeDevicesWithoutCapabilityCheckingSupport;
@property (nonatomic, readonly) NSDate *excludeZoneAccessBefore;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExcludeDevicesWithoutCapabilityCheckingSupport:(char)a0 excludeZoneAccessBefore:(id)a1;

@end
