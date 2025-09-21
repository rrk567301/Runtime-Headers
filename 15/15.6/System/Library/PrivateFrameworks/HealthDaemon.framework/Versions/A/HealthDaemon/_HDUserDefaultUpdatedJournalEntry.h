@class HDUserDefault;

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HDUserDefault *userDefault;

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
