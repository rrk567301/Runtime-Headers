@interface MILocationSystemDefinedBase : NSObject <MILocationProtocol, NSSecureCoding, NSCoding, NSCopying>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLocationSystemDefinedBase:(id)a0;

@end
