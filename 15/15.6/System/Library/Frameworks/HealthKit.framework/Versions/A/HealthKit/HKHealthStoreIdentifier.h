@class NSUUID, HKProfileIdentifier;

@interface HKHealthStoreIdentifier : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (readonly, getter=isPrimaryStoreIdentifier) char primaryStoreIdentifier;

+ (id)identifierFromProfileIdentifier:(id)a0;
+ (id)primaryStoreIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initPrimaryStoreIdentifier;

@end
