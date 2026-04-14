@class NSString, _TtC7Sharing33_SFAirDropTransferObserverAdaptor, _SFAirDropTransferObserver;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : NSObject <SFAirDropTransferObserverDelegate>

@property (retain, nonatomic) _SFAirDropTransferObserver *legacyObserver;
@property (retain, nonatomic) _TtC7Sharing33_SFAirDropTransferObserverAdaptor *modernObserver;
@property (nonatomic) BOOL isModern;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)removedTransfer:(id)a0;
- (id)init;
- (void)updatedTransfer:(id)a0;
- (void)activate;
- (void).cxx_destruct;

@end
