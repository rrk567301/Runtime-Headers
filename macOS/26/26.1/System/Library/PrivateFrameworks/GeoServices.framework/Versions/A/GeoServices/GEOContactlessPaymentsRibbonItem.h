@class NSString, NSArray, GEOPDContactlessPaymentsRibbonItem;

@interface GEOContactlessPaymentsRibbonItem : NSObject {
    GEOPDContactlessPaymentsRibbonItem *_ribbonItem;
}

@property (readonly, nonatomic) NSString *ribbonText;
@property (readonly, nonatomic) NSArray *indexesWithinAmenityComponent;

- (void).cxx_destruct;
- (id)initWithRibbonitem:(id)a0;

@end
