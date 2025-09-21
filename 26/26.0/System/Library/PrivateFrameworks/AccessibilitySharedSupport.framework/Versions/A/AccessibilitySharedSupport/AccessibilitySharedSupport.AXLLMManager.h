@interface AccessibilitySharedSupport.AXLLMManager : NSObject {
    void /* unknown type, empty encoding */ clientName;
    void /* unknown type, empty encoding */ useOnDeviceModel;
    void /* unknown type, empty encoding */ usePartnerCloud;
    void /* unknown type, empty encoding */ usePrivateCloudPlanner;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ handleSensitiveData;
    void /* unknown type, empty encoding */ systemInstructions;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ _generativeExperiencesSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithClientName:(id)a0 model:(long long)a1 handleSensitiveData:(BOOL)a2 systemInstructions:(id)a3 locale:(id)a4;

@end
