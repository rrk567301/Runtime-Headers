@class NSData;

@interface HDCachedSecureCKRecordJournalEntry : HDJournalEntry

@property (nonatomic) long long recordID;
@property (retain, nonatomic) NSData *recordData;

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
