@class GEODataRequestThrottlerToken, GEOMapServiceTraits;

@interface GEOAbstractTicket : NSObject {
    BOOL _cancelled;
    GEODataRequestThrottlerToken *_throttlerToken;
}

@property (readonly, nonatomic) GEOMapServiceTraits *traits;
@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, getter=isCancelled) BOOL cancelled;

- (id)initWithTraits:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (void)setThrottlerToken:(id)a0;

@end
