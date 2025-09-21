@class GEODataRequestThrottlerToken, GEOMapServiceTraits;

@interface GEOAbstractTicket : NSObject {
    char _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, getter=isCancelled) char cancelled;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithTraits:(id)a0;
- (void)setThrottlerToken:(id)a0;

@end
