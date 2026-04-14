@class _PXVideoPlaybackCPAnalyticsEndpoint, NSString, NSDate, NSMutableArray;

@interface PXVideoPlaybackReporter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _endpointsLock;
}

@property (nonatomic) long long state;
@property (readonly, copy, nonatomic) NSMutableArray *endpoints;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *assetCreationDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) long long priority;
@property (retain, nonatomic) _PXVideoPlaybackCPAnalyticsEndpoint *cpAnalyticsEndpoint;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isStateFinal;

- (void)addEndpoint:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_sendPayloadToEndpointsIfNeeded;
- (void)_sendPayloadToEndpointIfNeeded:(id)a0;
- (void)addEndpointWithPlayerItem:(id)a0;
- (id)initWithIdentifier:(id)a0 CPAnalysticsEndpoint:(BOOL)a1;
- (void)reportAVAssetCreated;
- (void)reportPlaybackAbandoned;
- (void)reportPlaybackBegan;
- (void)reportPlaybackRequestedWithPriority:(long long)a0;

@end
