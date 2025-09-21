@class _PASXPCClientHelper;

@interface ATXInfoSuggestionFeedbackClient : NSObject {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)stackDidRotateProactivelyForInfoSuggestion:(id)a0 isStalenessRotation:(char)a1;
- (void)suggestionDismissed:(id)a0 isDismissalLongTerm:(char)a1 completion:(id /* block */)a2;

@end
