@interface CaliMIPRequestOperation : CaliMIPOperation

@property BOOL isNewRequest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)a0 ignoreiMIPSuppression:(BOOL)a1;
+ (int)icsMethod;
+ (id)operationsWithManagedAttendees:(id)a0 areNewRequests:(BOOL)a1;
+ (BOOL)managedEventHasChangeRequringiMIPReschedule:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)attachmentName;
- (id)emailBodyInContext:(id)a0;
- (id)emailRecipientsInContext:(id)a0;
- (id)emailSubjectInContext:(id)a0;
- (id)attachmentInContext:(id)a0;

@end
