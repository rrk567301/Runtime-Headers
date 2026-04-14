@class NSString, NSData;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject

@property id<SFCompanionAdvertiserDelegate> delegate;
@property BOOL supportsStreams;
@property (readonly, copy) NSString *serviceType;
@property (readonly) NSData *serviceEndpointData;

- (id)initWithServiceType:(id)a0;
- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (void)getContinuationStreamsWithEndpointData:(id)a0 completionHandler:(id /* block */)a1;

@end
