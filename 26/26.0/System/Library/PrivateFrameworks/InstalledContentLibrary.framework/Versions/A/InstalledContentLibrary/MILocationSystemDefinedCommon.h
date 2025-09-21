@class NSString, NSDictionary;

@interface MILocationSystemDefinedCommon : MILocationSystemDefinedBase

@property (class, nonatomic, readonly) NSString *plistTypeName;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSDictionary *plistDictionary;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)new;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initFromPlistDictionary:(id)a0 error:(id *)a1;
- (BOOL)isEqualWithLocationSystemDefinedCommon:(id)a0;

@end
