@class NSUUID, NSMutableArray, NSMutableDictionary;

@interface WTAnalyticsDelegate : NSObject <WTWritingToolsDelegate_Internal>

@property (retain) NSUUID *analyticsSessionId;
@property (retain, nonatomic) NSMutableArray *proofreadingSuggestions;
@property (retain, nonatomic) NSMutableDictionary *uuidSuggestionMapping;
@property unsigned long long refreshIndex;
@property BOOL fromCandidateBar;
@property (nonatomic) BOOL wantsWritingToolsInlineEditing;

- (id)init;
- (void).cxx_destruct;
- (void)compositionSession:(id)a0 didReceiveText:(id)a1 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)didBeginWritingToolsSession:(id)a0 contexts:(id)a1;
- (void)didEndWritingToolsSession:(id)a0 accepted:(BOOL)a1;
- (void)proofreadingSession:(id)a0 didReceiveSuggestions:(id)a1 processedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inContext:(id)a3 finished:(BOOL)a4;
- (void)proofreadingSession:(id)a0 didUpdateState:(long long)a1 forSuggestionWithUUID:(id)a2 inContext:(id)a3;
- (void)replaceSelectionWithText:(id)a0;
- (void)willBeginWritingToolsSession:(id)a0 requestContexts:(id /* block */)a1;
- (void)writingToolsSession:(id)a0 didReceiveAction:(long long)a1;
- (void)applicationDidEnterBackground;
- (void)copyText:(id)a0;
- (void)applicationWillTerminate;
- (void)endWritingTools;
- (void)applicationDidBecomeActive;
- (void)endWritingToolsWithError:(id)a0;
- (id)getWritingToolsFeature:(long long)a0;
- (id)getWritingToolsFeatureDetail:(long long)a0;

@end
