@class NSArray, SFSearchResult, NSNumber;

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (retain, nonatomic) NSArray *uniqueIdsOfVisibleButtons;
@property (retain, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections;
@property (nonatomic) BOOL isFilterBarShown;
@property (retain, nonatomic) NSNumber *inputToResultShownMs;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithResults:(id)a0 triggerEvent:(unsigned long long)a1 visibleButtons:(id)a2 visibleCardSections:(id)a3;
- (id)description;
- (id)initWithResults:(id)a0 triggerEvent:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;

@end
