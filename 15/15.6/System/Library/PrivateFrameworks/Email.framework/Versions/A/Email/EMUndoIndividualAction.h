@class NSArray, EMFollowUp, NSURL, ECMessageFlagChange, NSDate, EMCategory;

@interface EMUndoIndividualAction : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long actionType;
@property (retain, nonatomic) NSArray *messageDatabaseIDs;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (retain, nonatomic) NSURL *destinationMailboxURL;
@property (retain, nonatomic) NSDate *readLaterDate;
@property (retain, nonatomic) EMFollowUp *followUp;
@property (nonatomic) char blockSender;
@property (nonatomic) long long conversationID;
@property (nonatomic) long long conversationNotificationLevel;
@property (retain, nonatomic) EMCategory *category;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
