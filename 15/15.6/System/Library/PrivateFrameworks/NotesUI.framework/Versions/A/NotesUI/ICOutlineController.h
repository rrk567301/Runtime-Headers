@class NSSet, NSArray, OutlineController, ICTTTextStorage;

@interface ICOutlineController : NSObject

@property (retain, nonatomic) OutlineController *outlineControllerObject;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;
@property (nonatomic) char isAsynchronous;
@property (retain, nonatomic) NSSet *collapsedUUIDs;
@property (readonly, nonatomic) long long collapsibleSectionAffordanceUsages;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (readonly, nonatomic) NSArray *visibleRangeValues;
@property (readonly, nonatomic) NSArray *invisibleRangeValues;
@property (readonly, nonatomic) NSArray *rangesValuesContainingCollapsedRanges;
@property (readonly, nonatomic) NSArray *rangesValuesContainingExpandedRanges;

- (void).cxx_destruct;
- (void)requestUpdate;
- (id)ancestorsForUUID:(id)a0;
- (char)canCollapseAnyUUIDs:(id)a0;
- (char)canExpandAnyUUIDs:(id)a0;
- (id)closestVisibleAncestorForUUID:(id)a0;
- (void)collapseAll;
- (void)collapseUUIDs:(id)a0;
- (void)collapsibleSectionAffordanceUsedForUUIDs:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })descendantRangeForUUID:(id)a0;
- (id)descendantsForUUID:(id)a0;
- (void)expandAll;
- (void)expandAncestorsOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)expandUUIDs:(id)a0;
- (id)initWithTextStorage:(id)a0 collapsedUUIDs:(id)a1 asynchronous:(char)a2;
- (char)isUUIDCollapsed:(id)a0;
- (char)isUUIDCollapsible:(id)a0;
- (char)isUUIDHidden:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUUID:(id)a0;
- (void)resetCollapsibleSectionAffordanceUsages;
- (char)toggleCollapsedAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)toggleUUIDCollapsed:(id)a0;

@end
