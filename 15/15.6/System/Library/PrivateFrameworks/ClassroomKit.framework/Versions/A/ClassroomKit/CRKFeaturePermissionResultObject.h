@class NSDictionary;

@interface CRKFeaturePermissionResultObject : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long permission;
@property (nonatomic, getter=isModifiable) char modifiable;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
