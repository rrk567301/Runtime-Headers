@class NSString, NSXPCConnection;

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSString *machName;
@property (nonatomic) BOOL isValid;

+ (id)serviceInterface;
+ (id)differentialPrivacyRecorderForEmoji:(id)a0 usageMode:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)didUseEmoji:(id)a0;
- (void)writeEmojiDefaults;
- (void)_disconnect;
- (id)initWithMachName:(id)a0;
- (id)_initWithoutConnection;
- (void)createConnectionIfNecessary;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)a0 usageMode:(id)a1 typingName:(id)a2;
- (void)didViewEmojiIndex:(long long)a0 forCategory:(id)a1;
- (void)writeEmojiDefaultsAndNotify:(BOOL)a0;

@end
