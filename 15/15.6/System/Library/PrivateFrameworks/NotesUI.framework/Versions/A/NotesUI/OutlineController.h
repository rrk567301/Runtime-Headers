@class NSSet, NSArray, NSString;

@interface OutlineController : NSObject {
    void /* unknown type, empty encoding */ _collapsedUUIDs;
    void /* unknown type, empty encoding */ _interactedUUIDs;
    void /* unknown type, empty encoding */ _index;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ isPerformingMerge;
    void /* unknown type, empty encoding */ selectorDelayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateQueue;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ textStorage;
@property (nonatomic, copy) NSSet *collapsedUUIDs;
@property (nonatomic, copy) NSSet *interactedUUIDs;
@property (nonatomic) void /* unknown type, empty encoding */ isAsynchronous;
@property (nonatomic, readonly) long long collapsibleSectionAffordanceUsages;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (nonatomic, readonly) NSArray *visibleRangeValues;
@property (nonatomic, readonly) NSArray *invisibleRangeValues;
@property (nonatomic, readonly) NSArray *rangesValuesContainingCollapsedRanges;
@property (nonatomic, readonly) NSArray *rangesValuesContainingExpandedRanges;
@property (nonatomic, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
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
- (void)mergingDidEndWithNotification:(id)a0;
- (void)mergingWillBeginWithNotification:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUUID:(id)a0;
- (void)resetCollapsibleSectionAffordanceUsages;
- (void)textStorageDidProcessEndEditingWithNotification:(id)a0;
- (char)toggleCollapsedAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)toggleUUIDCollapsed:(id)a0;

@end
