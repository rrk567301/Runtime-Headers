@class MRMediaUserState, NSArray;

@interface MRGroupSessionEligibilityStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isEligibleForHostingGroupSession;
@property (nonatomic) char isEligibleForJoiningGroupSession;
@property (nonatomic) char isEligibleForHostingGroupSessionExcludingAcknowledgements;
@property (nonatomic) char isManateeEnabled;
@property (nonatomic) char idsAccountIsValid;
@property (nonatomic) unsigned long long mediaAccountHostingState;
@property (nonatomic) unsigned long long mediaAccountJoiningState;
@property (retain, nonatomic) MRMediaUserState *currentMediaUserState;
@property (retain, nonatomic) NSArray *mediaUserStates;
@property (nonatomic) unsigned char routeType;
@property (nonatomic) char routeIsValidForHosting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryDescription;
- (id)differenceFrom:(id)a0;

@end
