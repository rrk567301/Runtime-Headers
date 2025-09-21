@class NSArray;

@interface MapsSuggestions.MapsSuggestionsFakeFinanceKitConnector : NSObject <MapsSuggestions.MapsSuggestionsFinanceKitConnector> {
    void /* function */ orderPickups;
    void /* function */ _callbackHandle;
}

@property (nonatomic, copy) NSArray *orderPickups;
@property (nonatomic, copy) id /* block */ _callbackHandle;

- (id)init;
- (void).cxx_destruct;
- (id)currentOrderPickupsWithPeriod:(double)a0;
- (id)startObservingOrderPickupsIn:(double)a0 callback:(id /* block */)a1;
- (void)updatedOrders;

@end
