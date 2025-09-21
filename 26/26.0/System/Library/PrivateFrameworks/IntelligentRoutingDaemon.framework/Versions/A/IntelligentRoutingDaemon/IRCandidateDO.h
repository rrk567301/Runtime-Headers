@class NSString, NSSet, NSDate;

@interface IRCandidateDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *lastSeenDate;
@property (readonly, nonatomic) NSDate *lastUsedDate;
@property (readonly, nonatomic) NSDate *firstSeenDate;
@property (readonly, nonatomic) NSString *candidateIdentifier;
@property (readonly, nonatomic) NSSet *nodes;

+ (id)candidateDOFromCandidate:(id)a0;
+ (id)candidateDOWithLastSeenDate:(id)a0 lastUsedDate:(id)a1 firstSeenDate:(id)a2 candidateIdentifier:(id)a3 nodes:(id)a4;
+ (id)candidateForIdentifier:(id)a0 within:(id)a1;
+ (id)candidateFromCandidateDO:(id)a0;
+ (id)mediaRemoteSpeakerCandidate;

- (BOOL)isMac;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)name;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)containsAirPlayOrUnknownAVODTarget;
- (BOOL)containsAirplayTarget;
- (BOOL)containsUnknownAVODTarget;
- (id)copyWithReplacementCandidateIdentifier:(id)a0;
- (id)copyWithReplacementFirstSeenDate:(id)a0;
- (id)copyWithReplacementLastSeenDate:(id)a0;
- (id)copyWithReplacementLastUsedDate:(id)a0;
- (id)copyWithReplacementNodes:(id)a0;
- (id)exportAsDictionary;
- (id)initWithLastSeenDate:(id)a0 lastUsedDate:(id)a1 firstSeenDate:(id)a2 candidateIdentifier:(id)a3 nodes:(id)a4;
- (BOOL)isBrokeredDevice;
- (BOOL)isEqualToCandidateDO:(id)a0;
- (BOOL)isFirstPartyDevice;
- (BOOL)isMediaRemoteLocal;
- (BOOL)isSameICloudWithSystemState:(id)a0;
- (BOOL)isSameWiFi;

@end
