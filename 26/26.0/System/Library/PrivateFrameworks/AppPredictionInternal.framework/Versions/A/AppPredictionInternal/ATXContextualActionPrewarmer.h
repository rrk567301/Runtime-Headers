@class NSArray, NSError, ATXOnScreenSelectedContent;

@interface ATXContextualActionPrewarmer : NSObject {
    void /* unknown type, empty encoding */ cachedContextualActions;
    void /* unknown type, empty encoding */ cachedSummaries;
    void /* unknown type, empty encoding */ cachedContextualActionsCustomTitles;
    void /* unknown type, empty encoding */ cachedTypeMetadataForOnScreenEntities;
    void /* unknown type, empty encoding */ lastKnownSelectedText;
    void /* unknown type, empty encoding */ prewarmingDone;
    void /* unknown type, empty encoding */ toolKitSession;
    void /* unknown type, empty encoding */ serialQueue;
}

@property (class, nonatomic, readonly) ATXContextualActionPrewarmer *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearPrewarmedContent;
- (void)fetchEncodedToolInvocationsViaSlowPathWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;
- (id)getEncodedPrewarmedToolInvocationsForCurrentContextAndReturnError:(id *)a0;
- (void)prewarmToolInvocationsForOnScreenSelectedContent:(ATXOnScreenSelectedContent *)a0 completionHandler:(void (^)(void))a1;

@end
