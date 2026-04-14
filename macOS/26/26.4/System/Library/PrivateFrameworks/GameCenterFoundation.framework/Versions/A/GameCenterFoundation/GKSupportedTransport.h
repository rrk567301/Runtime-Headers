@class NSString;

@interface GKSupportedTransport : GKInternalRepresentation

@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) long long version;

+ (id)secureCodedPropertyKeys;
+ (unsigned int)supportedTransportVersionSetForSupportedTransportVersion:(long long)a0;
+ (unsigned int)supportedTransportVersionSetForTransportVersionStrings:(id)a0;
+ (id)supportedTransportVersionsFromSupportedTransportVersionSet:(unsigned int)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithVersionNumber:(id)a0;

@end
