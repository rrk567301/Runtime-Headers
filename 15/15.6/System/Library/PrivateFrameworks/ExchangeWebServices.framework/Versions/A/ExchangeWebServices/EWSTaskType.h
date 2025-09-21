@class NSString, NSArray, EWSTaskRecurrenceType, NSDateComponents;

@interface EWSTaskType : EWSItemType

@property (nonatomic) long long ActualWork;
@property (nonatomic) char ActualWorkSpecified;
@property (retain, nonatomic) NSDateComponents *AssignedTime;
@property (copy, nonatomic) NSString *BillingInformation;
@property (nonatomic) long long ChangeCount;
@property (nonatomic) char ChangeCountSpecified;
@property (copy, nonatomic) NSArray *Companies;
@property (retain, nonatomic) NSDateComponents *CompleteDate;
@property (copy, nonatomic) NSArray *Contacts;
@property (nonatomic) long long DelegationState;
@property (copy, nonatomic) NSString *Delegator;
@property (retain, nonatomic) NSDateComponents *DueDate;
@property (nonatomic) long long IsAssignmentEditable;
@property (nonatomic) char IsAssignmentEditableSpecified;
@property (nonatomic) char IsComplete;
@property (nonatomic) char IsCompleteSpecified;
@property (nonatomic) char IsRecurring;
@property (nonatomic) char IsRecurringSpecified;
@property (nonatomic) char IsTeamTask;
@property (nonatomic) char IsTeamTaskSpecified;
@property (copy, nonatomic) NSString *Mileage;
@property (copy, nonatomic) NSString *Owner;
@property (nonatomic) double PercentComplete;
@property (nonatomic) char PercentCompleteSpecified;
@property (retain, nonatomic) EWSTaskRecurrenceType *Recurrence;
@property (retain, nonatomic) NSDateComponents *StartDate;
@property (nonatomic) long long Status;
@property (copy, nonatomic) NSString *StatusDescription;
@property (nonatomic) long long TotalWork;
@property (nonatomic) char TotalWorkSpecified;

+ (id)definition;

- (void).cxx_destruct;

@end
