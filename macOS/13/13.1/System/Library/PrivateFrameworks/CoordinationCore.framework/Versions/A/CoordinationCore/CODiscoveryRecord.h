@class NSOrderedSet, NSString, RPCompanionLinkDevice, COConstituent;

@interface CODiscoveryRecord : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) COConstituent *constituent;
@property (retain, nonatomic) NSOrderedSet *destinations;
@property (readonly, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) NSString *IDSIdentifier;
@property (readonly, nonatomic) RPCompanionLinkDevice *companionLinkDevice;

+ (id)discoveryRecordWithNode:(id)a0;
+ (id)discoveryRecordWithElectionRequest:(id)a0;
+ (id)_destinationForPeerAddress:(id)a0 listeningPort:(unsigned short)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldAdvertise;
- (id)_initWithConstituent:(id)a0 rapportIdentifier:(id)a1 IDSIdentifier:(id)a2 destinations:(id)a3;
- (id)initWithDiscoveryRecord:(id)a0;
- (BOOL)isEqualToDiscoveryRecord:(id)a0;

@end
