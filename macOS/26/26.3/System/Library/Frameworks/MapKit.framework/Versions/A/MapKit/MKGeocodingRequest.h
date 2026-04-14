@class NSString, NSLocale;
@protocol MKMapServiceTicket;

@interface MKGeocodingRequest : NSObject {
    id<MKMapServiceTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *addressString;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } region;
@property (retain, nonatomic) NSLocale *preferredLocale;

- (void)cancel;
- (void).cxx_destruct;
- (id)_geoMapRegion;
- (void)_handleMapItems:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performRequestWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMapItemsWithCompletionHandler:(id /* block */)a0;
- (void)getMapItemsWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAddressString:(id)a0;

@end
