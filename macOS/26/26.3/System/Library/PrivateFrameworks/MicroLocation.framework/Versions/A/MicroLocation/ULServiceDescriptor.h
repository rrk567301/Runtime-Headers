@class NSUUID, NSArray;

@interface ULServiceDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long serviceType;
@property (readonly, nonatomic) NSArray *locationTypes;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServiceIdentifier:(id)a0 serviceType:(unsigned long long)a1 locationTypes:(id)a2;

@end
