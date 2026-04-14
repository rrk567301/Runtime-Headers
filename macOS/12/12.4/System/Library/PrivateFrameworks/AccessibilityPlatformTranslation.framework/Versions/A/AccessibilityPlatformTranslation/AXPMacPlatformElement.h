@class NSArray, NSMutableDictionary, NSString, AXPTranslationObject;

@interface AXPMacPlatformElement : NSAccessibilityElement <NSAccessibilityCustomRotorItemSearchDelegate, NSAccessibilityCustomElementDataProvider, AXPTranslationElementProtocol, NSAccessibilityElement> {
    NSMutableDictionary *_selectiveCache;
}

@property (retain, nonatomic) AXPTranslationObject *translation;
@property (retain, nonatomic) NSArray *cachedCustomActions;
@property (retain, nonatomic) NSArray *cachedCustomRotors;
@property (retain, nonatomic) NSMutableDictionary *cachedRotorResult;
@property (copy, nonatomic) id /* block */ nsPostEventTestingCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)elementWithAccessibilityCustomElementData:(id)a0;
+ (id)applicationElement;
+ (id)platformElementWithTranslationObject:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)role;
- (id)accessibilityParent;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)rotor:(id)a0 resultForSearchParameters:(id)a1;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeValue:(id)a0 forParameter:(id)a1;
- (int)accessibilityPresenterProcessIdentifier;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityMultipleAttributes:(id)a0;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityCustomElementData;
- (BOOL)accessibilitySupportsCustomElementData;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformShowMenu;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityCustomRotors;
- (id)_cachedRole;
- (BOOL)_synthesizeMouseClick:(unsigned int)a0;
- (unsigned long long)_attributeTypeForMacAttribute:(id)a0;
- (id)_accessibilityProcessAttribute:(id)a0;
- (id)_customRotorData:(id)a0;
- (unsigned int)_windowContextId;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withDisplayId:(unsigned int)a1 contextId:(unsigned int)a2;
- (BOOL)_isRemoteElement;
- (int)_remoteElementPid;
- (id)_accessibilityProcessAttribute:(id)a0 parameter:(id)a1;
- (id)_accessibilityProcessImmediateAttributeResult:(id)a0;
- (id)_convertTranslatorResponse:(id)a0 forAttribute:(unsigned long long)a1;
- (id)_postProcessResult:(id)a0 attributeType:(unsigned long long)a1;
- (void)_cacheResultSelectively:(id)a0 attribute:(unsigned long long)a1;
- (id)_macAttributeTypeForAXPAttribute:(unsigned long long)a0;
- (id)_accessibilityTranslationRootParent;
- (BOOL)performNotifyVoiceOverAnnouncementCompletionWithValue:(id)a0;
- (BOOL)_shouldPostProcessSubstituteRemoteRepresentationWithObject:(id)a0 forAttribute:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertPlatformFrameToSystemFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_clientSideRemoteElement;
- (void)performIncrementAction;
- (void)performDecrementAction;
- (void)performEscapeAction;
- (void)performScrollToVisible;
- (void)performScrollDownByPageAction;
- (void)performScrollUpByPageAction;
- (void)performScrollLeftByPageAction;
- (void)performScrollRightByPageAction;
- (void)performMagicTapAction;
- (void)performScrollNextPageAction;
- (void)performScrollPreviousPageAction;

@end
