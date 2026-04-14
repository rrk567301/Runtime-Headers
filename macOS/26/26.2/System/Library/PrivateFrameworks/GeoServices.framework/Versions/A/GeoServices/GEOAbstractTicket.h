@class GEODataRequestThrottlerToken, GEOMapServiceTraits;

@interface GEOAbstractTicket : NSObject {
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, getter=isCancelled) BOOL cancelled;

- (void)cancel;
- (id)initWithTraits:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setThrottlerToken:(id)a0;

@end
