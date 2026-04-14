@class NSNumber, NSString, IRCandidate;

@interface IRCandidateResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *sortingHint;
@property (nonatomic) BOOL isCallToAction;
@property (nonatomic) BOOL isLockScreenControl;
@property (nonatomic) BOOL isConservativeFiltered;
@property (readonly, nonatomic) IRCandidate *candidate;
@property (readonly, nonatomic) long long classification;
@property (readonly, nonatomic) NSString *classificationDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 andClassificationDescription:(id)a2;
- (id)initWithCandidate:(id)a0 classification:(long long)a1 classificationDescription:(id)a2 sortingHint:(id)a3 isCallToAction:(BOOL)a4 isLockScreenControl:(BOOL)a5 isConservativeFiltered:(BOOL)a6;
- (void)setClassification:(long long)a0 withDescription:(id)a1;

@end
