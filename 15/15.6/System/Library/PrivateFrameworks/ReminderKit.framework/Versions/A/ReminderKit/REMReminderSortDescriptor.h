@interface REMReminderSortDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char ascending;

+ (id)sortDescriptorSortingByCreationDateAscending:(char)a0;
+ (id)sortDescriptorSortingByDueDateAscending:(char)a0;
+ (id)sortDescriptorSortingByOrderingInListAscending:(char)a0;
+ (id)sortDescriptorSortingByPriorityAscending:(char)a0;
+ (id)sortDescriptorSortingByTitleAscending:(char)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 ascending:(char)a1;

@end
