@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (void)dealloc;
- (id)init;
- (void)setShouldShowSiriSuggestions:(char)a0;
- (char)shouldShowSiriSuggestions;

@end
