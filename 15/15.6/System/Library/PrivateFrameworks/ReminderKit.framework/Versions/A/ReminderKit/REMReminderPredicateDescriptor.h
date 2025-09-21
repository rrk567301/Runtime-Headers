@class NSArray, NSString, NSDate, REMObjectID;

@interface REMReminderPredicateDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) NSDate *startingDueDate;
@property (retain, nonatomic) NSDate *endingDueDate;
@property (nonatomic) char completed;
@property (retain, nonatomic) NSArray *descriptors;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long textMatching;

+ (id)andPredicateDescriptorWithDescriptors:(id)a0;
+ (id)orPredicateDescriptorWithDescriptors:(id)a0;
+ (id)predicateDescriptorForRemindersWithCompleted:(char)a0;
+ (id)predicateDescriptorForRemindersWithDueDateBetween:(id)a0 and:(id)a1;
+ (id)predicateDescriptorForRemindersWithTitleContains:(id)a0;
+ (id)predicateDescriptorForRemindersWithDisplayDateBetween:(id)a0 and:(id)a1;
+ (id)predicateDescriptorForRemindersWithDisplayDateOnOrAfter:(id)a0;
+ (id)predicateDescriptorForRemindersWithDisplayDateOnOrBefore:(id)a0;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)a0;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)a0;
+ (id)predicateDescriptorForRemindersWithListID:(id)a0;
+ (id)predicateDescriptorForRemindersWithObjectIDs:(id)a0;
+ (id)predicateDescriptorForRemindersWithParentReminderID:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleBeginsWith:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleEndsWith:(id)a0;
+ (id)predicateDescriptorForRemindersWithTitleEquals:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)initWithReminderPredicateDescriptor:(id)a0;

@end
