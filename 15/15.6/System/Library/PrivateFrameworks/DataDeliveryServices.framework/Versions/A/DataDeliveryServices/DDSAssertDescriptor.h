@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *assertionIdentifier;
@property (retain, nonatomic) DDSAssetPolicy *policy;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpDescription;
- (id)initWithPolicy:(id)a0 assertionID:(id)a1 clientID:(id)a2;
- (char)isEqualToDescriptor:(id)a0;

@end
