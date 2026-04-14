@class NSUUID, HKProfileIdentifier;

@interface HKHealthStoreIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (readonly, getter=isPrimaryStoreIdentifier) BOOL primaryStoreIdentifier;

+ (id)identifierFromProfileIdentifier:(id)a0;
+ (id)primaryStoreIdentifier;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initPrimaryStoreIdentifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
