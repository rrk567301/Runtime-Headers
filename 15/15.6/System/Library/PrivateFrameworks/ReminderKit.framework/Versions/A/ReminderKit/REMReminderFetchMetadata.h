@class NSDictionary, NSArray;

@interface REMReminderFetchMetadata : REMFetchMetadata

@property (readonly, nonatomic) NSDictionary *subtaskCounts;
@property (readonly, nonatomic) NSArray *dueDateCounts;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDueDateCounts:(id)a0;
- (id)initWithSubtaskCounts:(id)a0;
- (id)initWithSubtaskCounts:(id)a0 dueDateCounts:(id)a1;

@end
