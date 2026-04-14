@class NSMutableDictionary, NSArray, NSWritingToolsEditTracker, NSAttributedString, NSMutableArray;
@protocol NSWritingToolsProofreadingControllerDelegate;

@interface NSWritingToolsProofreadingController : NSObject

@property (copy, nonatomic) NSAttributedString *contextString;
@property (weak, nonatomic) id<NSWritingToolsProofreadingControllerDelegate> delegate;
@property (retain, nonatomic) NSWritingToolsEditTracker *editTracker;
@property (nonatomic) BOOL finished;
@property (retain, nonatomic) NSMutableDictionary *suggestionsByUUID;
@property (retain, nonatomic) NSMutableArray *suggestionsByRange;
@property (readonly, copy, nonatomic) NSArray *suggestions;
@property (nonatomic) BOOL acceptOpenSuggestionsInFinish;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)finish;
- (void)finish:(BOOL)a0;
- (void)updateSuggestionWithUUID:(id)a0 state:(long long)a1;
- (void)addSuggestionWithUUID:(id)a0 originalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)initWithContextString:(id)a0 contextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delegate:(id)a2;
- (id)suggestionWithUUID:(id)a0;

@end
