@class NSArray, NSString;
@protocol GEOMapServiceTicket;

@interface CLSBusinessGeoServiceQuery : NSObject <CLSQueryProtocol>

@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, copy, nonatomic) NSArray *muids;
@property (readonly, nonatomic) id<GEOMapServiceTicket> ticket;
@property (readonly, nonatomic) NSArray *resultingMapItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForRetry;
- (void)cancel;
- (void)submitWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithMUIDs:(id)a0;

@end
