@class HKCharacteristicType;

@interface _HDSetCharacteristicJournalEntry : HDJournalEntry

@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) HKCharacteristicType *dataType;

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
