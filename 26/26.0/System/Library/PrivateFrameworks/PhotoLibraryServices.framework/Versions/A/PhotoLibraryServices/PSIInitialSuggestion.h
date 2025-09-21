@class PSIGroup, PLSearchSuggestionTemplate;

@interface PSIInitialSuggestion : NSObject

@property (readonly, nonatomic) PLSearchSuggestionTemplate *suggestionTemplate;
@property (readonly, nonatomic) PSIGroup *firstGroup;
@property (readonly, nonatomic) PSIGroup *secondGroup;
@property (readonly, nonatomic) double dateLastUsed;

- (id)groups;
- (void).cxx_destruct;
- (id)initWithSuggestionTemplate:(id)a0 firstGroup:(id)a1 secondGroup:(id)a2 dateLastUsed:(double)a3;

@end
