@class VSAccountChannels, NSError, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation

@property (retain, nonatomic) VSAccountChannels *unsavedAccountChannels;
@property (retain, nonatomic) VSAccountChannelsCenter *accountChannelsCenter;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccountChannels:(id)a0 accountChannelsCenter:(id)a1;

@end
