@class NSString, NSMutableSet, NSMutableDictionary;

@interface RBAssertionIntransientState : NSObject <NSCopying>

@property (nonatomic) char isPersistent;
@property (nonatomic) char hasHereditaryGrant;
@property (nonatomic) char hasDomainAttribute;
@property (nonatomic) char definesRelativeStartTime;
@property (nonatomic) char terminateTargetOnOriginatorExit;
@property (nonatomic) char invalidatesSynchronously;
@property (nonatomic) char preventsSuspension;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) double warningDuration;
@property (readonly, nonatomic) NSMutableSet *sourceEnvironments;
@property (nonatomic) unsigned long long runningReason;
@property (nonatomic) unsigned long long legacyReason;
@property (retain, nonatomic) NSString *domainAttributes;
@property (nonatomic) char suspendsOnOriginatorSuspension;
@property (retain, nonatomic) NSMutableDictionary *invalidatesOnConditions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
