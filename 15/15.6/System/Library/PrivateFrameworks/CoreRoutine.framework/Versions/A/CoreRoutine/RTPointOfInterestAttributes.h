@class NSString;

@interface RTPointOfInterestAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long nearbyPoiCount;
@property (readonly, nonatomic) char applePaySupport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplePaySupport:(char)a0 category:(id)a1 muid:(unsigned long long)a2 nearbyPoiCount:(unsigned long long)a3;

@end
