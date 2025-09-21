@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *seriesUUID;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) Class seriesClass;

+ (char)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeriesUUID:(id)a0 metadata:(id)a1 class:(Class)a2;

@end
