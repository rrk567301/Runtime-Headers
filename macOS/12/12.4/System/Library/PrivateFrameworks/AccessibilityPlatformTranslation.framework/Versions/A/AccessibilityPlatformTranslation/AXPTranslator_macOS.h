@interface AXPTranslator_macOS : AXPTranslator

@property (copy, nonatomic) id /* block */ zoomTriggerTestingCallback;
@property (copy, nonatomic) id /* block */ appNotificationTestingCallback;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)remotePlatformElementFromTranslation:(id)a0 forPid:(int)a1;
- (id /* block */)attributedStringConversionBlock;
- (id)platformElementFromTranslation:(id)a0;
- (void)enableAccessibility;
- (id)processMultipleAttributeRequest:(id)a0;
- (id)processActionRequest:(id)a0;
- (id)processAttributeRequest:(id)a0;
- (id)processApplicationObject:(id)a0;
- (id)processFrontMostApp:(id)a0;
- (id)processHitTest:(id)a0;
- (void)processPlatformNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;
- (void)_processZoomFocusNotificationWithData:(id)a0 associatedObject:(id)a1;
- (void)_processAppAccessibilityNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;

@end
