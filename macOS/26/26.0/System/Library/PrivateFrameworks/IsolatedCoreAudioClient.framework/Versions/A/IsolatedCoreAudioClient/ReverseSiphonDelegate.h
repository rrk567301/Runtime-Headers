@class NSXPCListener, NSString, NSXPCInterface;

@interface ReverseSiphonDelegate : NSObject <NSXPCListenerDelegate, IsolatedCoreAudioReverseSiphonProtocol> {
    void /* function */ *mAvailabilityCallback;
    void /* function */ *mLapseCallback;
    void *mAvailabilityData;
    void *mLapseData;
}

@property (retain, nonatomic) NSXPCListener *reverseListener;
@property (retain, nonatomic) NSXPCInterface *reverseInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)LapseCallback:(int)a0 with:(id /* block */)a1;
- (void)AudioAvailabilityCallback:(unsigned long long)a0 atSample:(unsigned long long)a1 with:(id /* block */)a2;
- (void)setAvailabilityCallback:(void /* function */ *)a0 data:(void *)a1;
- (void)setLapseCallback:(void /* function */ *)a0 data:(void *)a1;

@end
