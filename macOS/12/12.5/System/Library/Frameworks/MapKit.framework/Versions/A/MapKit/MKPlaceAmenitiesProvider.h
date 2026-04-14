@class NSArray, NSImage, MKMapItem;

@interface MKPlaceAmenitiesProvider : NSObject {
    MKMapItem *_mapItem;
    NSArray *_amenityItems;
}

@property (readonly, copy, nonatomic) NSArray *inlineAmenityList;
@property (readonly, nonatomic) NSImage *imageForApplePay;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0;
- (void)_createAmenityItems;
- (id)_stringForAmenity:(int)a0;
- (void)refreshWithFont:(id)a0 textColor:(id)a1;

@end
