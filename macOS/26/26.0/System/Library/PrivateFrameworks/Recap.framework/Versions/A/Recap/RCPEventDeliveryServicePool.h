@class NSMutableDictionary;
@protocol RCPEventDeliveryService;

@interface RCPEventDeliveryServicePool : NSObject <RCPEventDeliveryServicePool>

@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderID;
@property (retain, nonatomic) NSMutableDictionary *deliveryServicesBySenderProperties;
@property (retain, nonatomic) id<RCPEventDeliveryService> fallbackDeliveryService;
@property (nonatomic) BOOL shouldIgnoreSenderProperties;

- (id)deliveryServiceForSenderProperties:(id)a0;
- (void)tearDown;
- (BOOL)prewarmForSenderProperties:(id)a0 withError:(id *)a1;
- (id)init;
- (id)_findServiceForSenderProperties:(id)a0;
- (void).cxx_destruct;

@end
