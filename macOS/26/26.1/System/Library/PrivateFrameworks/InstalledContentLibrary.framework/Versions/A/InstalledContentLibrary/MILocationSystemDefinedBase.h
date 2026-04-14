@interface MILocationSystemDefinedBase : NSObject <MILocationProtocol, NSSecureCoding, NSCoding, NSCopying>

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initInternal;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToLocationSystemDefinedBase:(id)a0;

@end
