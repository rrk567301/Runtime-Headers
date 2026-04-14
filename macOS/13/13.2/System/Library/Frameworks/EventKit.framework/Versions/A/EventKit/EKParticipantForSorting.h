@class NSString, EKParticipant;
@protocol EKIdentityProtocol;

@interface EKParticipantForSorting : NSObject <NSCopying>

@property (weak, nonatomic) EKParticipant *participant;
@property (weak, nonatomic) id<EKIdentityProtocol> identity;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *cachedDisplayName;
@property (nonatomic) BOOL isEmail;
@property (nonatomic) BOOL isPhone;

+ (id)participantForSortingWithEKParticipant:(id)a0;
+ (id)participantForSortingWithIdentity:(id)a0;
+ (id)_sharedParticipantForSortingWithIdentity:(id)a0 participant:(id)a1 contactPredicate:(id)a2;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)participantIsOptional:(id)a0;
- (long long)compareByEmailThenByContactName:(id)a0;
- (long long)compareByContactNames:(id)a0;

@end
