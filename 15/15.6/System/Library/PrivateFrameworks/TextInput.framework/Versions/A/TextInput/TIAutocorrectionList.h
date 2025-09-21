@class TICorrectionCandidates, NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char containsProactiveTriggers;
@property (nonatomic) char proactiveSuggestionsEmpty;
@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) TICorrectionCandidates *corrections;
@property (readonly, nonatomic) NSArray *predictions;
@property (readonly, nonatomic) NSArray *inlineCompletions;
@property (readonly, nonatomic) NSArray *emojiList;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) char hasSupplementalCandidates;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property (readonly, nonatomic) NSArray *predictionsIfSupplemental;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) NSArray *alternateCorrections;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) char shouldAcceptTopCandidate;

+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2 inlineCompletions:(id)a3;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;
+ (id)autocorrectionListWithCandidates:(id)a0 shouldAcceptTopCandidate:(char)a1;
+ (id)listWithAutocorrection:(id)a0;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1;
+ (id)listWithAutocorrection:(id)a0 predictions:(id)a1 emojiList:(id)a2;
+ (id)listWithCorrections:(id)a0;
+ (id)listWithCorrections:(id)a0 inlineCompletionList:(id)a1;
+ (id)listWithCorrections:(id)a0 predictions:(id)a1;
+ (id)listWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2;
+ (id)listWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 inlineCompletionList:(id)a3 proactiveTriggers:(id)a4;
+ (id)listWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 inlineCompletions:(id)a3;
+ (id)listWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;
+ (id)listWithPredictions:(id)a0 emojiList:(id)a1 proactiveTriggers:(id)a2;
+ (id)listWithPredictions:(id)a0 proactiveTriggers:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidates:(id)a0;
- (char)hasSupplementalItems;
- (id)initListWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3 inlineCompletions:(id)a4;
- (id)initWithCandidates:(id)a0 shouldAcceptTopCandidate:(char)a1;
- (id)initWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3;
- (id)initWithCorrections:(id)a0 predictions:(id)a1 emojiList:(id)a2 proactiveTriggers:(id)a3 inlineCompletions:(id)a4;
- (char)isSupplementalCandidateInPredictions:(id)a0;
- (char)shouldAcceptInlineCompletion;

@end
