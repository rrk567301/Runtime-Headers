@class GEOApplicationAuditToken;

@interface MKPlaceInlineMapViewControllerConfiguration : NSObject

@property (nonatomic) char useWindowTraitCollectionForUserInterfaceStyle;
@property (nonatomic) char suppressLookAround;
@property (nonatomic) char suppressSectionHeader;
@property (nonatomic) char showMapAttribution;
@property (retain, nonatomic) GEOApplicationAuditToken *mapSnapshotAuditToken;

+ (id)configurationForPlaceViewControllerOptions:(unsigned long long)a0;

- (void).cxx_destruct;

@end
