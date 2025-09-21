@class TUConversationMemberAssociation, NSString, NSArray, TUHandle, NSDate, TUVoucher, NSSet;

@interface TUConversationMember : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char needsContactLookupForDisplayName;
@property (readonly, copy, nonatomic) NSString *idsFromID;
@property (readonly, copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) char joinedFromLetMeIn;
@property (nonatomic) char isOtherInvitedHandle;
@property (nonatomic) long long validationSource;
@property (copy, nonatomic) TUConversationMemberAssociation *association;
@property (retain, nonatomic) TUVoucher *associationVoucher;
@property (readonly, copy, nonatomic) NSArray *idsDestinations;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic, getter=isValidated) char validated;
@property (nonatomic) char isSplitSessionMember;
@property (nonatomic) char isLightweightMember;
@property (retain, nonatomic) NSDate *dateReceivedLetMeIn;
@property (retain, nonatomic) NSDate *dateInitiatedLetMeIn;
@property (copy, nonatomic) TUHandle *splitSessionPrimary;
@property (copy, nonatomic) TUHandle *lightweightPrimary;
@property (nonatomic) unsigned long long lightweightPrimaryParticipantIdentifier;
@property (readonly, copy, nonatomic) NSSet *handles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0;
- (char)pseudonym;
- (id)initWithDestinations:(id)a0;
- (id)initWithContact:(id)a0;
- (id)initWithHandles:(id)a0;
- (id)initWithDestination:(id)a0;
- (id)initWithContact:(id)a0 additionalHandles:(id)a1;
- (id)initWithHandle:(id)a0 nickname:(id)a1;
- (id)initWithHandle:(id)a0 nickname:(id)a1 joinedFromLetMeIn:(char)a2;
- (char)isEqualToMember:(id)a0;
- (char)representsSameMemberAs:(id)a0;

@end
