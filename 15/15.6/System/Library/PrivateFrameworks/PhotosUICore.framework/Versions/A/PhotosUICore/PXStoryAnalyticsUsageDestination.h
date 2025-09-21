@class NSString, NSMutableDictionary;

@interface PXStoryAnalyticsUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    NSMutableDictionary *_sessionInfosByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)processEvent:(id)a0;
- (id)_createDefaultPayloadForInfo:(id)a0;
- (id)_createInfoForEvent:(id)a0;
- (void)_enumerateExistingInfosUsingBlock:(id /* block */)a0;
- (id)_existingInfoForEvent:(id)a0;
- (id)_existingInfoForEvent:(id)a0 pop:(char)a1;
- (id)_popInfoForEndEvent:(id)a0;
- (void)_sendSummaryEventsForInfo:(id)a0;

@end
