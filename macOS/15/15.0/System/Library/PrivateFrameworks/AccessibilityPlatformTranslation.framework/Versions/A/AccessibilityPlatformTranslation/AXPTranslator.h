@class NSMutableDictionary;
@protocol AXPTranslationTokenDelegateHelper, AXPTranslationDelegateHelper, AXPTranslationRuntimeHelper, AXPTranslationSystemAppDelegate;

@interface AXPTranslator : NSObject

@property (retain, nonatomic) NSMutableDictionary *fakeElementCache;
@property (nonatomic) BOOL supportsDelegateTokens;
@property (retain, nonatomic) NSMutableDictionary *bridgeDelegateTokenToTreeDumpLookup;
@property (weak, nonatomic) id<AXPTranslationDelegateHelper> bridgeDelegate;
@property (weak, nonatomic) id<AXPTranslationTokenDelegateHelper> bridgeTokenDelegate;
@property (nonatomic) unsigned long long requestResolvingBehavior;
@property (weak, nonatomic) id<AXPTranslationRuntimeHelper> runtimeDelegate;
@property (nonatomic) BOOL accessibilityEnabled;
@property (weak, nonatomic) id<AXPTranslationSystemAppDelegate> systemAppDelegate;

+ (id)sharedInstance;
+ (id)sharediOSInstance;
+ (id)sharedmacOSInstance;

- (id)init;
- (void).cxx_destruct;
- (id /* block */)attributedStringConversionBlock;
- (id)platformElementFromTranslation:(id)a0;
- (id)processHitTest:(id)a0;
- (id)_checkCacheForFrontmostAppResponseWithBridgeDelegateToken:(id)a0;
- (void)_resetBridgeTokensForResponse:(id)a0 bridgeDelegateToken:(id)a1;
- (id)_translationApplicationObjectForPidNumber:(id)a0;
- (id)appKitPlatformElementFromTranslation:(id)a0;
- (id)checkTreeDumpCacheForRequest:(id)a0;
- (id)checkTreeDumpCacheResponses:(id)a0 forMatchingResponse:(id)a1 withBridgeTokenDelegate:(id)a2;
- (void)enableAccessibility;
- (id)frontmostApplicationWithDisplayId:(unsigned int)a0 bridgeDelegateToken:(id)a1;
- (id)generateAdditionalAXTreeDump;
- (id)generateInitialAXTreeDump;
- (void)handleNotification:(unsigned long long)a0 data:(id)a1 associatedObject:(id)a2;
- (void)handleUpdatedAXTree:(id)a0;
- (void)initializeAXRuntimeForSystemAppServer;
- (id)macPlatformElementFromTranslation:(id)a0;
- (id)objectAtPoint:(struct CGPoint { double x0; double x1; })a0 displayId:(unsigned int)a1 bridgeDelegateToken:(id)a2;
- (id)platformTranslator;
- (id)processAXTreeElements:(id)a0;
- (id)processActionRequest:(id)a0;
- (id)processAttributeRequest:(id)a0;
- (id)processCanSetAttribute:(id)a0;
- (id)processFrontMostApp:(id)a0;
- (id)processMultipleAttributeRequest:(id)a0;
- (void)processPlatformAXTreeDump:(id)a0;
- (void)processPlatformNotification:(unsigned long long)a0 data:(id)a1;
- (id)processSetAttribute:(id)a0;
- (id)processSupportedActions:(id)a0;
- (id)processSupportsAttributes:(id)a0;
- (id)processTranslatorRequest:(id)a0;
- (id)remoteTranslationDataWithTranslation:(id)a0 pid:(int)a1;
- (id)sendTranslatorRequest:(id)a0;
- (BOOL)shouldCheckTreeDumpCacheForRequestType:(unsigned long long)a0;
- (id)translationApplicationObject;
- (id)translationApplicationObjectForPid:(int)a0;
- (id)translationObjectFromData:(id)a0;
- (id)treeDumpCacheResultDataForAttributeTypeRequest:(id)a0;
- (id)treeDumpCacheResultDataForCanSetAttributeTypeRequest:(id)a0;
- (id)treeDumpCacheResultDataForSupportedActionsTypeRequest:(id)a0;
- (id)treeDumpCacheResultDataForSupportsAttributesTypeRequest:(id)a0;
- (id)treeDumpResponseCacheForBridgeDelegateToken:(id)a0;
- (void)updateTreeDumpCacheResponse:(id)a0 withAdditionalResponse:(id)a1;

@end
