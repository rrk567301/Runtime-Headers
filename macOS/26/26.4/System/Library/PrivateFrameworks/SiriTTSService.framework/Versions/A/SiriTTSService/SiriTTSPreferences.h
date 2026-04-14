@interface SiriTTSPreferences : NSObject {
    void /* unknown type, empty encoding */ defaults;
}

@property (class, nonatomic, readonly) SiriTTSPreferences *shared;

- (void).cxx_destruct;
- (id)init;
- (BOOL)uiFirstTimeAssistantLanguageWithLanguageCode:(id)a0;

@end
