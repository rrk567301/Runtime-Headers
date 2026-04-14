@class NSString;

@interface ASKLoadAvatarResourceOperation : ASKLoadResourceOperation

@property (readonly, copy, nonatomic) NSString *playerId;

+ (id)supportedScheme;

- (void).cxx_destruct;
- (void)main;
- (id)initWithPlayerId:(id)a0;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (id)makePlayerFetchError;

@end
