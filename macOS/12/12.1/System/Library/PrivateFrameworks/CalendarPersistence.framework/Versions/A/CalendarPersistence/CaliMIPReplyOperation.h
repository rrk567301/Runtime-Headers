@class NSString;

@interface CaliMIPReplyOperation : CaliMIPPersistDetailsOperation

@property (retain) NSString *organizerEmail;
@property (retain) NSString *replyStatus;

+ (BOOL)supportsSecureCoding;
+ (int)icsMethod;
+ (id)operationsWithManagedAttendees:(id)a0 replyStatus:(id)a1;
+ (BOOL)_managedAttendeeWillCauseiMIPScheduling:(id)a0 ignoreParticipantStatus:(BOOL)a1;
+ (id)operationsWithManagedAttendees:(id)a0;
+ (BOOL)managedAttendeeWillCauseiMIPScheduling:(id)a0;
+ (BOOL)updateSequenceNumber;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAttendees:(id)a0;
- (id)attachmentName;
- (id)emailBodyInContext:(id)a0;
- (id)emailRecipientsInContext:(id)a0;
- (id)emailSubjectInContext:(id)a0;
- (int)_participationStatusInContext:(id)a0;

@end
