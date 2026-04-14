@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (id)init;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldShowSiriSuggestions;

@end
