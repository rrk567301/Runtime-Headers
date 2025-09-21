@class NSPredicate, NSString;

@interface GCGenericDeviceElementModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned int elementCookie;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *identifier;
@property (readonly) char optional;
@property (readonly) int typeOverride;
@property (readonly) long long calibrationMin;
@property (readonly) long long calibrationMax;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;

@end
