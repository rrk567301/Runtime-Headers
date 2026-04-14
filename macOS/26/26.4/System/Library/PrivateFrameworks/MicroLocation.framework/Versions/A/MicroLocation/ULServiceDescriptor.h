@class NSUUID, NSArray;

@interface ULServiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) NSArray *locationTypes;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 serviceType:(unsigned long long)a1 locationTypes:(id)a2;

@end
