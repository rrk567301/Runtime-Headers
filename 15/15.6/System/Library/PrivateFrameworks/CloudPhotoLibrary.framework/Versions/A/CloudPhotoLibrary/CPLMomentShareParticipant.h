@class NSString, NSPersonNameComponents;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) char hasiCloudAccount;
@property (nonatomic) char isCurrentUser;
@property (nonatomic) short type;
@property (nonatomic) short status;

+ (id)momentShareParticipantsFromParticipants:(id)a0;
+ (id)shareParticipantsFromMomentShareParticipants:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)asShareParticipant;
- (id)initWithShareParticipant:(id)a0;

@end
