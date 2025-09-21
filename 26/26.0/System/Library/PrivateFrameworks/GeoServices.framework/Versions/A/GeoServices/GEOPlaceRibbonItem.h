@class GEOContactlessPaymentsRibbonItem, GEOFactoidRibbonItem, GEOAmenityRibbonItem;

@interface GEOPlaceRibbonItem : NSObject

@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOFactoidRibbonItem *factoidItem;
@property (readonly, nonatomic) GEOAmenityRibbonItem *amenityItem;
@property (readonly, nonatomic) GEOContactlessPaymentsRibbonItem *contactlessPaymentsItem;

- (id)initWithType:(int)a0;
- (void).cxx_destruct;
- (id)initAmenityWithAmenityItem:(id)a0;
- (id)initWithContactlessPaymentsRibbonItem:(id)a0;
- (id)initWithFactoidRibbonItem:(id)a0;

@end
