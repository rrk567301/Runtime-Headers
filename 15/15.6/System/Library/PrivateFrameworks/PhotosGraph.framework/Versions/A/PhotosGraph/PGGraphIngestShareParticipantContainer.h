@class NSString, NSDictionary, PHShareParticipant, CLSPersonIdentity, NSDate;

@interface PGGraphIngestShareParticipantContainer : NSObject <PGGraphIngestPerson>

@property (retain, nonatomic) PHShareParticipant *shareParticipant;
@property (retain, nonatomic) CLSPersonIdentity *linkedPersonIdentity;
@property char personIdentityFound;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *contactID;
@property (readonly, nonatomic) NSString *shareParticipantLocalIdentifier;
@property (readonly, nonatomic) char isFavorite;
@property (readonly, nonatomic) char isHidden;
@property (readonly, nonatomic) char isUserCreated;
@property (readonly, nonatomic) char isMe;
@property (readonly, nonatomic) NSDate *birthdayDate;
@property (readonly, nonatomic) NSDate *potentialBirthdayDate;
@property (readonly, nonatomic) NSDate *anniversaryDate;
@property (readonly, nonatomic) unsigned long long relationship;
@property (readonly, nonatomic) unsigned long long ageCategory;
@property (readonly, nonatomic) unsigned long long sex;
@property (readonly, nonatomic) NSDictionary *locationsByAddressTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithShareParticipant:(id)a0 person:(id)a1;

@end
