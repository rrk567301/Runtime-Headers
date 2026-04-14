@class NSDictionary, GEODataRequestThrottlerToken, GEOMapServiceTraits;

@interface GEOAbstractTicket : NSObject {
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)setThrottlerToken:(id)a0;
- (id)initWithTraits:(id)a0;

@end
