@interface IFDCustomizationController : NSObject {
    struct IFDCustomizationController_Private { id x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; int x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned long long x15; unsigned long long x16; id x17; id x18; id x19; struct __CFBundle *x20; } *_private;
}

+ (void)initialize;

- (void)dealloc;
- (id)target;
- (void)reset;
- (id)distribution;
- (BOOL)_stateChanged;
- (id)customization;
- (id)choiceForIdentifier:(id)a0;
- (void)updateSizes;
- (id)rootItem;
- (id)itemEnumeratorForItem:(id)a0 onlyVisible:(BOOL)a1;
- (id)visibleChildrenForItem:(id)a0;
- (id)initWithInstallController:(id)a0 andTarget:(id)a1;
- (id)installController;
- (id)allChoices;
- (void)setInstallPadding:(unsigned long long)a0;
- (void)setDownloadPadding:(unsigned long long)a0;
- (BOOL)upgrading;
- (id)totalSelectedBytes;
- (id)totalDownloadBytes;
- (id)selectedBytesForItem:(id)a0;
- (id)bytesForItem:(id)a0;
- (id)minimumInstallSize;
- (id)childrenForItem:(id)a0;
- (id)itemEnumeratorForItem:(id)a0;
- (void)toggleItemSelection:(id)a0;
- (BOOL)applyChoiceChangesForFileAtPath:(id)a0;
- (BOOL)writeChoiceChangesToFileAtPath:(id)a0;
- (BOOL)shouldAllowInstallWithChecker:(id)a0 findFiles:(BOOL)a1 outStatus:(int *)a2 outSizeDeficit:(id *)a3;
- (unsigned long long)_downloadKbytesForPackage:(id)a0;
- (void)setTotalSelectedBytes:(id)a0;
- (void)setTotalDownloadBytes:(id)a0;
- (id)minimumInstallSizeIgnoringDiskContents:(BOOL)a0;
- (id)maximumInstallSizeIgnoringDiskContents:(BOOL)a0;
- (void)setDistantPackageDistance:(int)a0 usingSourceManager:(id)a1;
- (BOOL)ignoresContent;
- (void)setIgnoresContents:(BOOL)a0;
- (id)javaScriptRuntime;
- (id)selectedBytesOnTarget:(id)a0;
- (BOOL)_shouldAllowAlternateVolumeForChoice:(id)a0;
- (BOOL)_customLocationIsSelfContainedForChoice:(id)a0;
- (BOOL)validateCustomLocation:(id)a0 forChoice:(id)a1;
- (BOOL)setCustomLocation:(id)a0 forChoice:(id)a1 withError:(id *)a2;
- (void)_refreshStateAndSize:(BOOL)a0;
- (void)_collectItemStateForItem:(id)a0;
- (BOOL)_refreshActionForItemAndCheckForUpgrades:(id)a0;
- (void)_refreshTotalSelectedAndDownloadSize;
- (BOOL)_isOSUpdate;
- (unsigned long long)_sizeForItem:(id)a0 forTarget:(id)a1 includeUnselected:(BOOL)a2;
- (unsigned long long)_minimumRequiredSize:(id)a0 ignoreDiskContents:(BOOL)a1;
- (unsigned long long)_maximumInstallSize:(id)a0 ignoreDiskContents:(BOOL)a1;
- (void)setUpgrading:(BOOL)a0;
- (void)_addPackagesFromItem:(id)a0 withCurrentCustomLocation:(id)a1 selfContained:(BOOL)a2 toCustomization:(id)a3;
- (void)_createItemsFromDistribution;
- (void)_addItemsFromItem:(id)a0 toArray:(id)a1 onlyVisible:(BOOL)a2;
- (void)_evalAllItemAttrsExceptItem:(id)a0 doInit:(BOOL)a1;
- (BOOL)_evalDynamicPkgRefsOnChoice:(id)a0 incrementOnEval:(int *)a1;
- (BOOL)_evalItem:(id)a0 forAttribute:(id)a1 incrementOnEval:(int *)a2;
- (void)_recursiveSetStateTo:(int)a0 forItemAndChildrenOf:(id)a1;
- (BOOL)_recursiveCheckMixedStateForItem:(id)a0;

@end
