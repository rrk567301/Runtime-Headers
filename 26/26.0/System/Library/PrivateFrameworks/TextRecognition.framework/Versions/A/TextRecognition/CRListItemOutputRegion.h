@class NSString, CRListItemMarker;

@interface CRListItemOutputRegion : CRCompositeOutputRegion <CROutputRegionLayoutContributing> {
    CRListItemMarker *_marker;
}

@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } markerRange;
@property (readonly) long long markerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listItemForParagraph:(id)a0;
+ (BOOL)textStartsWithListItem:(id)a0;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)layoutComponents;
- (BOOL)contributesToDocumentHierarchy;
- (id)initWithLayoutListItem:(id)a0;
- (id)listItemByAppendingParagraph:(id)a0;
- (id)regionsSuitableForDataDetectorOutput;

@end
