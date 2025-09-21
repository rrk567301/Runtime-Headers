@class NSString, NSSet, NSDate;

@interface IRCandidateDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isMac;
- (char)containsAirPlayOrUnknownAVODTarget;
- (char)containsAirplayTarget;
- (char)containsUnknownAVODTarget;
- (id)copyWithReplacementCandidateIdentifier:(id)a0;
- (id)copyWithReplacementFirstSeenDate:(id)a0;
- (id)copyWithReplacementLastSeenDate:(id)a0;
- (id)copyWithReplacementLastUsedDate:(id)a0;
- (id)copyWithReplacementNodes:(id)a0;
- (id)exportAsDictionary;
- (id)initWithLastSeenDate:(id)a0 lastUsedDate:(id)a1 firstSeenDate:(id)a2 candidateIdentifier:(id)a3 nodes:(id)a4;
- (char)isBrokeredDevice;
- (char)isEqualToCandidateDO:(id)a0;
- (char)isFirstPartyDevice;
- (char)isMediaRemoteLocal;
- (char)isSameICloudWithSystemState:(id)a0;
- (char)isSameWiFi;

@end
