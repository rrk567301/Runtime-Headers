@class NSArray, GEOPDPlaceRibbonConfiguration;

@interface GEOPlaceRibbonConfiguration : NSObject {
    GEOPDPlaceRibbonConfiguration *_ribbonConfig;
}

@property (readonly, nonatomic) NSArray *ribbonItems;

- (void).cxx_destruct;
- (id)initWithRibbonConfiguration:(id)a0;
- (void)_buildRibbonItems;
- (void)_addFactoidEntriesForRibbonItem:(id)a0 toArray:(id)a1;
- (void)_addRegularRibbonEntryForType:(int)a0 toArray:(id)a1;
- (void)_addAmenityEntryForRibbonItem:(id)a0 toArray:(id)a1;

@end
