@class NSString;

@interface GKSupportedTransport : GKInternalRepresentation

@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) long long version;

+ (id)secureCodedPropertyKeys;
+ (unsigned int)supportedTransportVersionSetForSupportedTransportVersion:(long long)a0;
+ (unsigned int)supportedTransportVersionSetForTransportVersionStrings:(id)a0;
+ (id)supportedTransportVersionsFromSupportedTransportVersionSet:(unsigned int)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersionNumber:(id)a0;

@end
