@class CLLocation, NSLocale;
@protocol MKMapServiceTicket;

@interface MKReverseGeocodingRequest : NSObject {
    id<MKMapServiceTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSLocale *preferredLocale;

- (void)cancel;
- (id)initWithLocation:(id)a0;
- (void).cxx_destruct;
- (void)_handleMapItems:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_performRequestWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)getMapItemsWithCompletionHandler:(id /* block */)a0;
- (void)getMapItemsWithQueue:(id)a0 completionHandler:(id /* block */)a1;

@end
