@class NSHashTable, NSString, NSArray, UIFocusSystem, _UIFocusSearchInfo, _UIFocusMovementInfo, NSMutableArray, _UIFocusRegion, _UIFocusMapRect;
@protocol _UIFocusRegionContainer, UICoordinateSpace;

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {
    NSMutableArray *_mutableUnoccludedRegions;
    NSHashTable *_filteredOriginalRegions;
    struct __CFDictionary { } *_subregionToRegionMap;
    struct __CFDictionary { } *_regionToOccludingRegionsMap;
    struct __CFDictionary { } *_regionToFocusItemCache;
    struct __CFDictionary { } *_regionFrameCache;
    NSMutableArray *_stateStack;
    NSHashTable *_eligibleEnvironments;
    NSHashTable *_ineligibleEnvironments;
    NSHashTable *_uncachableEnvironments;
    NSArray *_regions;
    NSHashTable *_visitedRegionContainers;
    struct { unsigned char didCaptureSnapshot : 1; unsigned char isSearchingRegionsOfInterestContainer : 1; unsigned char clipToSnapshotRect : 1; unsigned char ignoresRootContainerClippingRect : 1; } _flags;
}

@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _UIFocusMovementInfo *movementInfo;
@property (readonly, nonatomic, getter=_searchArea) _UIFocusMapRect *searchArea;
@property (readonly, nonatomic) BOOL hasOnlyStaticContent;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) id<UICoordinateSpace> coordinateSpace;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> rootContainer;
@property (readonly, nonatomic) _UIFocusMapRect *mapArea;
@property (readonly, copy, nonatomic) _UIFocusRegion *focusedRegion;
@property (readonly, weak, nonatomic) id<_UIFocusRegionContainer> regionsContainer;
@property (readonly, copy, nonatomic) NSArray *regions;
@property (readonly, copy, nonatomic) NSArray *originalRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)addRegion:(id)a0;
- (void).cxx_destruct;
- (void)addRegions:(id)a0;
- (id)_cachedNextFocusedItemForRegion:(id)a0 withFocusMovementRequest:(id)a1 inMap:(id)a2;
- (void)_capture;
- (id)_initWithSnapshotter:(id)a0 mapArea:(id)a1 searchArea:(id)a2;
- (void)_trackOccludingRegion:(id)a0 forRegion:(id)a1;
- (void)_trackSubregion:(id)a0 forRegion:(id)a1;
- (void)addRegionsInContainer:(id)a0;
- (void)addRegionsInContainers:(id)a0;
- (void)consumeRegionInformationForRegions:(id)a0 fromSnapshot:(id)a1;
- (void)markContainerAsProvidingDynamicContent;
- (id)occludingRegionsForRegion:(id)a0;
- (id)originalRegionForRegion:(id)a0;
- (id)regionsForOriginalRegion:(id)a0;
- (id)searchArea;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snapshotFrameForRegion:(id)a0;

@end
