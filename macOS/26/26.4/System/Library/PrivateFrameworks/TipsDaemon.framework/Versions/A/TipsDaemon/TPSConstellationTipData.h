@class NSSet, NSDictionary;

@interface TPSConstellationTipData : NSObject {
    void /* function */ contextualTipIdentifiers;
    void /* function */ deliveryInfoMap;
    void /* function */ fullTipMap;
    void /* function */ tipIdentifiers;
}

@property (nonatomic, copy) NSSet *contextualTipIdentifiers;
@property (nonatomic, copy) NSDictionary *deliveryInfoMap;
@property (nonatomic, copy) NSDictionary *fullTipMap;
@property (nonatomic, copy) NSSet *tipIdentifiers;

- (void).cxx_destruct;
- (id)init;

@end
