@class NSSet;

@interface IRCandidatesContainerDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *candidates;

+ (id)candidatesContainerDOWithCandidates:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCandidates:(id)a0;
- (BOOL)isEqualToCandidatesContainerDO:(id)a0;
- (id)airplayOrUnknownCandidates;
- (id)candidateForCandidateIdentifier:(id)a0;
- (id)candidateNameForCandidateIdentifier:(id)a0;
- (id)copyWithReplacementCandidates:(id)a0;
- (id)exportAsDictionary;

@end
