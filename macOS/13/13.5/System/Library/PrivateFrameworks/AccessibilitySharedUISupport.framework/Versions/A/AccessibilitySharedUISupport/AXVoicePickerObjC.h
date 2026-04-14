@class NSString, NSDictionary, _TtC28AccessibilitySharedUISupport24AXVoicePickerSwiftBridge, _TtC28AccessibilitySharedUISupport24AXVoicePickerBridgeModel;

@interface AXVoicePickerObjC : NSView

@property (retain, nonatomic) _TtC28AccessibilitySharedUISupport24AXVoicePickerSwiftBridge *bridge;
@property (retain, nonatomic) _TtC28AccessibilitySharedUISupport24AXVoicePickerBridgeModel *model;
@property (nonatomic) BOOL initialValuesSet;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSDictionary *extraOptions;
@property (nonatomic) BOOL shouldDisplayNeural;
@property (retain, nonatomic) NSString *selectedVoiceIdentifier;
@property (retain, nonatomic) NSDictionary *selectedVoiceLanguageMap;
@property (copy, nonatomic) id /* block */ setSelectedVoicePreferencesCallback;
@property (copy, nonatomic) id /* block */ getSelectedVoicePreferencesCallback;
@property (copy, nonatomic) id /* block */ setSelectedVoiceLanguageMapCallback;
@property (copy, nonatomic) id /* block */ getSelectedVoiceLanguageMapCallback;

- (void).cxx_destruct;
- (void)update;
- (void)reloadView;

@end
