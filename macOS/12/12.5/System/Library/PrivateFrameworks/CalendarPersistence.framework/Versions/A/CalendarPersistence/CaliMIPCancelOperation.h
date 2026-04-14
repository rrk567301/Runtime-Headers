@class NSArray;

@interface CaliMIPCancelOperation : CaliMIPPersistDetailsOperation

@property (retain) NSArray *attendeeEmails;

+ (BOOL)supportsSecureCoding;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)a0 ignoreiMIPSuppression:(BOOL)a1;
+ (int)icsMethod;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAttendees:(id)a0;
- (id)attachmentName;
- (id)emailBodyInContext:(id)a0;
- (id)emailRecipientsInContext:(id)a0;
- (id)emailSubjectInContext:(id)a0;

@end
