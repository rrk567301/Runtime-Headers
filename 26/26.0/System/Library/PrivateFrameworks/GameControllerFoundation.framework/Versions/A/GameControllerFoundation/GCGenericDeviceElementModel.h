@class NSPredicate, NSString;

@interface GCGenericDeviceElementModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned int elementCookie;
@property (readonly, copy) NSPredicate *predicate;
@property (readonly, copy) NSString *identifier;
@property (readonly) BOOL optional;
@property (readonly) int typeOverride;
@property (readonly) long long calibrationMin;
@property (readonly) long long calibrationMax;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)a0 error:(out id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;

@end
