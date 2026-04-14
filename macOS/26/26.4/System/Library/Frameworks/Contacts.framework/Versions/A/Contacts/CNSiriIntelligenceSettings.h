@interface CNSiriIntelligenceSettings : NSObject <CNSiriIntelligenceSettingsProtocol> {
    _Atomic BOOL _shouldShowSiriSuggestions;
    int _notificationToken;
}

- (BOOL)shouldShowSiriSuggestions;
- (id)init;
- (void)setShouldShowSiriSuggestions:(BOOL)a0;
- (void)dealloc;

@end
