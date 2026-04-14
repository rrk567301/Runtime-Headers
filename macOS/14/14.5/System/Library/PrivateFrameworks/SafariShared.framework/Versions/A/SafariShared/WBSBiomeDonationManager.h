@class _WBSBiomeStream, NSObject;
@protocol OS_dispatch_queue;

@interface WBSBiomeDonationManager : NSObject {
    NSObject<OS_dispatch_queue> *_streamAccessQueue;
    _WBSBiomeStream *_autoPlayStream;
    _WBSBiomeStream *_navigationsStream;
    _WBSBiomeStream *_webPagePerformanceStream;
    _WBSBiomeStream *_webAppInFocusStream;
    _WBSBiomeStream *_pageLoadStream;
    _WBSBiomeStream *_windowProxyStream;
    _WBSBiomeStream *_memoryFootprintStream;
}

@property (class, readonly, nonatomic) WBSBiomeDonationManager *sharedManager;
@property (class, readonly, nonatomic) BOOL isBiomeStreamDonationAvailable;

@property (readonly, nonatomic) _WBSBiomeStream *_windowProxyStream;

- (id)init;
- (void).cxx_destruct;
- (id)_autoPlayStream;
- (id)_pageLoadStream;
- (int)_biomeDeviceClassForUserAgent:(long long)a0;
- (int)_biomePageLoadDeviceClassForUserAgent:(long long)a0;
- (int)_biomeSignalForAutoPlaySignal:(long long)a0;
- (int)_biomeWebAppInFocusWebAppTypeForWebAppType:(long long)a0;
- (void)_clearEventsDonatedSinceDate:(id)a0;
- (void)_donateWebPagePerformanceEventWithEvent:(int)a0 domain:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (id)_memoryFootprintStream;
- (id)_navigationsStream;
- (id)_webAppInFocusStream;
- (id)_webPagePerformanceStream;
- (int)_webPerformanceEventForDiagnosticLoggingKey:(id)a0;
- (void)clearEventsDonatedSinceDate:(id)a0;
- (void)donateAutoPlayEventWithSignal:(long long)a0 domain:(id)a1 countryCode:(id)a2 webPageLoadedOverPrivateRelay:(BOOL)a3;
- (BOOL)donateForDiagnosticLoggingKey:(id)a0 value:(id)a1 webPageLoadedOverPrivateRelay:(BOOL)a2;
- (void)donateMemoryFootprint:(unsigned long long)a0 withDomain:(id)a1 pageCount:(unsigned long long)a2 processLifetime:(double)a3 inForeground:(BOOL)a4 wasPrivateRelayed:(BOOL)a5 canSuspend:(BOOL)a6;
- (void)donateNavigationWithHighLevelDomain:(id)a0 userAgent:(long long)a1 wasPrivateRelayed:(BOOL)a2 statusCode:(long long)a3;
- (void)donatePageLoadWithUserAgent:(long long)a0 wasSearch:(BOOL)a1 wasPrivateBrowsing:(BOOL)a2 wasActualized:(BOOL)a3 provenance:(long long)a4;
- (void)donateWebAppInFocusEventWithStarting:(BOOL)a0 date:(id)a1 webAppType:(long long)a2 identifier:(id)a3 name:(id)a4 manifestId:(id)a5;
- (void)performPendingDeletionsBeforeTermination;

@end
