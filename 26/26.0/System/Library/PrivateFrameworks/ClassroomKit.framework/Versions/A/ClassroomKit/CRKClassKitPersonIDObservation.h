@protocol CRKClassKitFacade, CRKClassKitDataObserver;

@interface CRKClassKitPersonIDObservation : NSObject

@property (readonly, nonatomic) id<CRKClassKitFacade> classKitFacade;
@property (retain, nonatomic) id<CRKClassKitDataObserver> dataObserver;

- (void)dealloc;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithPersonIDs:(id)a0 classKitFacade:(id)a1 block:(id /* block */)a2;

@end
