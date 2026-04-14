@class NSArray;

@interface CaliMIPOperation : CalPersistentOperation

@property (readonly, retain) NSArray *attendeeObjectIDs;

+ (BOOL)supportsSecureCoding;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)a0 ignoreiMIPSuppression:(BOOL)a1;
+ (int)icsMethod;
+ (id)managedEventForManagedAttendee:(id)a0;
+ (id)operationsWithManagedAttendees:(id)a0;
+ (BOOL)managedAttendeeWillCauseiMIPScheduling:(id)a0;
+ (id)managedCalendarForManagedEvent:(id)a0;
+ (BOOL)updateSequenceNumber;
+ (BOOL)iMIPSchedulingWillResultFromChangesToManagedEvent:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithManagedAttendees:(id)a0;
- (id)attachmentName;
- (id)emailBodyInContext:(id)a0;
- (id)emailRecipientsInContext:(id)a0;
- (id)emailSubjectInContext:(id)a0;
- (id)attachmentForManagedEvent:(id)a0 withMethod:(int)a1;
- (id)organizerDisplayNameForAddress:(id)a0 commonName:(id)a1;
- (id)attachmentInContext:(id)a0;
- (BOOL)executeInContext:(id)a0 error:(id *)a1;
- (unsigned long long)attachmentOptions;
- (id)managedEventInContext:(id)a0;
- (id)fromAddressInContext:(id)a0;

@end
