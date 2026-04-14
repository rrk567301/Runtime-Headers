@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (BOOL)shouldShowSiriSuggestions;
- (id)init;
- (void)dealloc;

@end
