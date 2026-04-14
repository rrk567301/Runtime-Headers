@class NSSet;

@interface EKPredicate : NSPredicate

@property (retain, nonatomic) NSSet *calendarIdentifiers;
@property (nonatomic) BOOL skipSorting;
@property (copy, nonatomic) id /* block */ sortComparator;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCalendars:(id)a0;
- (BOOL)hasFastPathWithStore:(id)a0;
- (id)fastPathResultWithStore:(id)a0;

@end
