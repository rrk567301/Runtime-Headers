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

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)redactedDescription;
- (id)init;

@end
