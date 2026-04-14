@class NSNumber;
@protocol EMBiomeSuggestion;

@interface EMSearchQueryState : NSObject

@property (retain, nonatomic) id<EMBiomeSuggestion> suggestion;
@property (nonatomic) long long commitReason;
@property (retain, nonatomic) NSNumber *resultCount;
@property (nonatomic) BOOL hasResults;
@property (nonatomic) BOOL resultEngaged;
@property (nonatomic) int resultView;
@property (nonatomic) int engagedSectionType;
@property (nonatomic) int abandonedReason;

- (void).cxx_destruct;
- (id)init;
- (BOOL)canBeLogged;

@end
