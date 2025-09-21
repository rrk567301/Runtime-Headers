@class NSArray;

@interface MADMovieCurationResult : MADResult

@property (readonly, nonatomic) NSArray *curationScoreEntries;
@property (readonly, nonatomic) NSArray *highlightEntries;
@property (readonly, nonatomic) NSArray *summaryEntries;

+ (BOOL)supportsSecureCoding;
+ (id)resultWithSummaryEntries:(id)a0 highlightEntries:(id)a1 curationScoreEntries:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSummaryEntries:(id)a0 highlightEntries:(id)a1 curationScoreEntries:(id)a2;

@end
