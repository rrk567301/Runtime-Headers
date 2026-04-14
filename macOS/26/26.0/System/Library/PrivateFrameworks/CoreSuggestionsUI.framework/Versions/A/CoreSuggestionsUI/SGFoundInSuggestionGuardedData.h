@class _TtC17CoreSuggestionsUI30SGTextProcessingServiceWrapper, _TtC17CoreSuggestionsUI26SGFinanceKitServiceWrapper, NSObject;
@protocol SGSuggestionsServiceMailProtocol, SGSuggestionsServiceMessagesProtocol;

@interface SGFoundInSuggestionGuardedData : NSObject {
    NSObject<SGSuggestionsServiceMailProtocol> *_mailService;
    NSObject<SGSuggestionsServiceMessagesProtocol> *_messageService;
    _TtC17CoreSuggestionsUI30SGTextProcessingServiceWrapper *_textProcessingService;
    _TtC17CoreSuggestionsUI26SGFinanceKitServiceWrapper *_financeKitService;
}

- (void).cxx_destruct;

@end
