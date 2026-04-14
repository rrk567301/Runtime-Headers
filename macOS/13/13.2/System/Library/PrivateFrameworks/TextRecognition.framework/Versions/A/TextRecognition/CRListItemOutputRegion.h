@class NSString, CRListItemMarker;

@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing>

@property (retain) CRListItemMarker *marker;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } markerRange;
@property (readonly) long long markerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)textStartsWithListItem:(id)a0;
+ (id)listItemForParagraph:(id)a0;
+ (id)listItemMarkerForText:(id)a0 requiresAdjacentText:(BOOL)a1;
+ (id)_detectPredefinedListMarker:(id)a0 fromSet:(id)a1 markerType:(long long)a2;
+ (id)decorativeDecimalsSet;
+ (id)bulletsSet;
+ (id)hyphensSet;
+ (id)extendedMarkersSet;
+ (id)startOfMarkerSet;
+ (id)endOfMarkerSet;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)layoutComponents;
- (id)regionsSuitableForDataDetectorOutput;
- (id)initWithParagraphs:(id)a0 marker:(id)a1;
- (id)listItemByAppendingParagraph:(id)a0;
- (BOOL)canBeSucceededByListItem:(id)a0;

@end
