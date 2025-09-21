@class NSArray, NSString, NSDate;

@interface SGContactDetailSupervision : NSObject

@property (nonatomic) char regexBelongsToSender;
@property (nonatomic) char regexDoesNotBelongToSender;
@property (nonatomic) char isFirstPerson;
@property (nonatomic) char isThirdPerson;
@property (readonly, nonatomic) NSArray *matchingContacts;
@property (nonatomic) char isUnlikelyPhone;
@property (nonatomic) unsigned long long ignoreAfter;
@property (weak, nonatomic) NSDate *matchDate;
@property (weak, nonatomic) NSString *senderDisplayName;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 ddMatch:(id)a1 isUnlikelyPhone:(char)a2;
- (struct SGMContactDetailFoundIn_ { unsigned long long x0; })metricsContactDetailFoundIn;
- (struct SGMContactDetailOwner_ { unsigned long long x0; })metricsContactDetailOwner;

@end
