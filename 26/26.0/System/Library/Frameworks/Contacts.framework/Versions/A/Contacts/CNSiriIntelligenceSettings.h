@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)dealloc;
- (id)init;
- (BOOL)shouldShowSiriSuggestions;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;

@end
