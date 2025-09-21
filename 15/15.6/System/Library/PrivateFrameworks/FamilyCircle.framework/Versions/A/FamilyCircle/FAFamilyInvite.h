@class NSString, NSNumber, NSDate;

@interface FAFamilyInvite : NSObject

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *organizerFirstName;
@property (copy, nonatomic) NSString *organizerLastName;
@property (copy, nonatomic) NSString *organizerEmail;
@property (copy, nonatomic) NSString *inviteStatus;
@property (copy, nonatomic) NSNumber *organizerDSID;
@property (nonatomic) char isChildTransferInvite;
@property (copy, nonatomic) NSString *childFirstName;
@property (copy, nonatomic) NSString *childLastName;
@property (retain, nonatomic) NSDate *inviteDate;
@property (retain, nonatomic) NSNumber *badgeAfter;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
