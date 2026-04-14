@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)dealloc;
- (BOOL)shouldShowSiriSuggestions;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (id)init;

@end
