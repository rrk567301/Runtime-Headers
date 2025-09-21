@class NSString;

@interface CHSRemoteDevicePredicate : NSObject <NSSecureCoding, NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ predicate;
}

@property (class, nonatomic, readonly) CHSRemoteDevicePredicate *nonePredicate;
@property (class, nonatomic, readonly) CHSRemoteDevicePredicate *allPredicate;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (id)predicateWithDeviceIdentifier:(id)a0;
+ (id)predicateWithDeviceType:(long long)a0;
+ (id)predicateWithRelationshipIdentifier:(id)a0;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsDevice:(id)a0;

@end
