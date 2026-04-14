@class NSString, GEOLogMsgState, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)deviceCountryChanged:(id)a0;
- (id)mapUIShown;
- (id)searchResults;
- (id)impressionObject;
- (id)placeCardReveal;
- (id)curatedCollectionRedacted;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (int)_launchActionFromAPLaunchAction:(int)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)stateForType:(long long)a0;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (id)_sessionStateForType:(int)a0;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;

@end
