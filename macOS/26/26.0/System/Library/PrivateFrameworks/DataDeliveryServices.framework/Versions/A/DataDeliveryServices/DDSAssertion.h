@class NSSet, DDSAssetQuery, NSMutableSet, NSDate, DDSAssetPolicy, NSString;

@interface DDSAssertion : NSObject <NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *descriptors;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly, nonatomic) DDSAssetQuery *query;
@property (readonly, nonatomic) DDSAssetPolicy *policy;
@property (readonly, nonatomic) NSSet *assertionIdentifiers;
@property (readonly, nonatomic) NSSet *clientIdentifiers;

- (id)assertionIDsForClientID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dumpDescription;
- (void)invalidateDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithQuery:(id)a0;
- (id)addDescriptorWithAssertionID:(id)a0 clientID:(id)a1 policy:(id)a2;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)removeDescriptorWithAssertionID:(id)a0;
- (void)removeDescriptorWithClientID:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToAssertion:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
