@interface SiriTTSPreferences : NSObject {
    void /* unknown type, empty encoding */ defaults;
}

@property (class, nonatomic, readonly) SiriTTSPreferences *shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)uiFirstTimeAssistantLanguageWithLanguageCode:(id)a0;

@end
