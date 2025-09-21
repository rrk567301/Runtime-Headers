@interface AXSSRemoteDesktopViewer : NSObject {
    void /* unknown type, empty encoding */ _macImpl;
}

- (void)start;
- (void)stop;
- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFeatureEnabled:(unsigned long long)a0;
- (void)startVoiceOverControlForTesting;
- (id)decodeDictForTesting:(id)a0;
- (void)disableAutoControlForTesting;
- (id)encodeDictForTesting:(id)a0;
- (id)getRemoteId;
- (int)handleServerAccessibilityMessageWithFeature:(unsigned long long)a0 message:(unsigned long long)a1 userInfo:(id)a2;
- (int)handleServerAccessibilityReplyWithFeature:(unsigned long long)a0 messageID:(unsigned int)a1 userInfo:(id)a2;
- (BOOL)isFeatureLocallyEnabled:(unsigned long long)a0;
- (void)setFeature:(unsigned long long)a0 enabled:(BOOL)a1;
- (void)stopVoiceOverControlForTesting;

@end
