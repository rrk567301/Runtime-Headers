@class NSString;

@interface RTPointOfInterestAttributes : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long nearbyPoiCount;
@property (readonly, nonatomic) BOOL applePaySupport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplePaySupport:(BOOL)a0 category:(id)a1 muid:(unsigned long long)a2 nearbyPoiCount:(unsigned long long)a3;

@end
