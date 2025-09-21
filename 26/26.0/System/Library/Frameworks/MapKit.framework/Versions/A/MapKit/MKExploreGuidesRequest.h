@class NSString, MKMapItemIdentifier;
@protocol MKMapServiceExploreGuidesTicket;

@interface MKExploreGuidesRequest : NSObject {
    id<MKMapServiceExploreGuidesTicket> _ticket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _loading;
    BOOL _cancelled;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } referenceLocation;
@property (readonly, nonatomic) NSString *airportCode;
@property (readonly, nonatomic) NSString *cityName;
@property (retain, nonatomic) MKMapItemIdentifier *mapItemIdentifier;
@property (readonly, nonatomic) unsigned long long supportedPunchoutType;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (unsigned long long)geoSupportedPunchoutType;
- (void)getResponseWithCompletionHandler:(id /* block */)a0;
- (id)initWithReferenceLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 airportCode:(id)a1 cityName:(id)a2 supportedPunchoutType:(unsigned long long)a3;

@end
