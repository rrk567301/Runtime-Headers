@class NSString;

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
