@class NSString, NSNumber, IRCandidate;

@interface IRCandidateResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *classificationDescription;
@property (retain, nonatomic) NSNumber *sortingHint;
@property (nonatomic) char isCallToAction;
@property (nonatomic) char isLockScreenControl;
@property (nonatomic) char isConservativeFiltered;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 andClassificationDescription:(id)a2;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 classificationDescription:(id)a2 sortingHint:(id)a3 isCallToAction:(char)a4 isLockScreenControl:(char)a5 isConservativeFiltered:(char)a6;
- (void)setClassification:(long long)a0 withDescription:(id)a1;

@end
