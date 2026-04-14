@class NSArray, NSDictionary, NSString;

@interface SCRSpeechAttributeGuide : SCRGuide <AXEEventTapListener>

@property (nonatomic, setter=_setCurrentAttributeIndex:) long long _currentAttributeIndex;
@property (readonly, nonatomic) NSArray *_orderedSpeechAttributeTypes;
@property (readonly, nonatomic) NSDictionary *_attributeTypeToKeyNames;
@property (readonly, nonatomic) NSArray *_percentValueGuideItems;
@property (retain, nonatomic) NSArray *_voiceGuideItems;
@property (retain, nonatomic) NSArray *_languageGuideItems;
@property (retain, nonatomic) NSArray *_brailleTableGuideItems;
@property (nonatomic) long long currentAttributeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_currentSpeechAttributeTypeFromPreferences;

- (void)dealloc;
- (void).cxx_destruct;
- (void)eventTapManager:(id)a0 passivelyTappedEvent:(struct __CGEvent { } *)a1 type:(unsigned int)a2 withProxy:(struct __CGEventTapProxy { } *)a3;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)_closeSpeechAttributeRotor;
- (void)openWithSelectionIndex:(unsigned long long)a0;
- (void)selectItemAtIndex:(unsigned long long)a0 indexForView:(unsigned long long)a1;
- (void)_closeWithOutputRequest:(id)a0;
- (id)initWithMenuWindow:(id)a0 cursor:(id)a1;
- (void)_addDescriptionToOutputRequest:(id)a0;
- (unsigned long long)_indexOfGuideItemMatchingCurrentSettingsValueForAttribute:(long long)a0;
- (void)_persistCurrentAttributeValueToUserDefaults;
- (double)_valueAsPercentForAttribute:(long long)a0;
- (id)_buildSpeechAttributeBrailleTableGuideItems;
- (void)_reloadSpeechAttributeBrailleTableGuide;
- (id)_buildSpeechAttributePercentValueGuideItems;
- (id)_buildSpeechAttributeLanguageGuideItems;
- (void)_reloadSpeechAttributeLanguageGuide;
- (id)_buildSpeechAttributeVoiceGuideItems;
- (void)_reloadSpeechAttributeVoiceGuide;
- (void)_removeSpeechAttributeGuideObservers;

@end
