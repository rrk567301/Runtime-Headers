@interface IFDCustomizationController : NSObject {
    struct IFDCustomizationController_Private { id x0; char x1; char x2; char x3; char x4; char x5; int x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; unsigned long long x15; unsigned long long x16; id x17; id x18; id x19; struct __CFBundle *x20; } *_private;
}

+ (void)initialize;

- (void)dealloc;
- (id)target;
- (void)reset;
- (id)distribution;
- (char)_stateChanged;
- (id)customization;
- (id)choiceForIdentifier:(id)a0;
- (void)updateSizes;
- (id)rootItem;
- (id)initWithInstallController:(id)a0 andTarget:(id)a1;
- (id)installController;
- (id)itemEnumeratorForItem:(id)a0 onlyVisible:(char)a1;
- (id)visibleChildrenForItem:(id)a0;
- (id)allChoices;
- (void)_createItemsFromDistribution;
- (char)_customLocationIsSelfContainedForChoice:(id)a0;
- (unsigned long long)_downloadKbytesForPackage:(id)a0;
- (char)_evalDynamicPkgRefsOnChoice:(id)a0 incrementOnEval:(int *)a1;
- (void)_addItemsFromItem:(id)a0 toArray:(id)a1 onlyVisible:(char)a2;
- (void)_addPackagesFromItem:(id)a0 withCurrentCustomLocation:(id)a1 selfContained:(char)a2 toCustomization:(id)a3;
- (void)_collectItemStateForItem:(id)a0;
- (void)_evalAllItemAttrsExceptItem:(id)a0 doInit:(char)a1;
- (char)writeChoiceChangesToFileAtPath:(id)a0;
- (char)_evalItem:(id)a0 forAttribute:(id)a1 incrementOnEval:(int *)a2;
- (char)_isOSUpdate;
- (unsigned long long)_maximumInstallSize:(id)a0 ignoreDiskContents:(char)a1;
- (unsigned long long)_minimumRequiredSize:(id)a0 ignoreDiskContents:(char)a1;
- (char)_recursiveCheckMixedStateForItem:(id)a0;
- (void)_recursiveSetStateTo:(int)a0 forItemAndChildrenOf:(id)a1;
- (char)_refreshActionForItemAndCheckForUpgrades:(id)a0;
- (void)_refreshStateAndSize:(char)a0;
- (void)_refreshTotalSelectedAndDownloadSize;
- (char)_shouldAllowAlternateVolumeForChoice:(id)a0;
- (unsigned long long)_sizeForItem:(id)a0 forTarget:(id)a1 includeUnselected:(char)a2;
- (char)applyChoiceChangesForFileAtPath:(id)a0;
- (id)bytesForItem:(id)a0;
- (id)childrenForItem:(id)a0;
- (char)ignoresContent;
- (id)itemEnumeratorForItem:(id)a0;
- (id)javaScriptRuntime;
- (id)maximumInstallSizeIgnoringDiskContents:(char)a0;
- (id)minimumInstallSize;
- (id)minimumInstallSizeIgnoringDiskContents:(char)a0;
- (id)selectedBytesForItem:(id)a0;
- (id)selectedBytesOnTarget:(id)a0;
- (char)setCustomLocation:(id)a0 forChoice:(id)a1 withError:(id *)a2;
- (void)setDistantPackageDistance:(int)a0 usingSourceManager:(id)a1;
- (void)setDownloadPadding:(unsigned long long)a0;
- (void)setIgnoresContents:(char)a0;
- (void)setInstallPadding:(unsigned long long)a0;
- (void)setTotalDownloadBytes:(id)a0;
- (void)setTotalSelectedBytes:(id)a0;
- (void)setUpgrading:(char)a0;
- (char)shouldAllowInstallWithChecker:(id)a0 findFiles:(char)a1 outStatus:(int *)a2 outSizeDeficit:(id *)a3;
- (void)toggleItemSelection:(id)a0;
- (id)totalDownloadBytes;
- (id)totalSelectedBytes;
- (char)upgrading;
- (char)validateCustomLocation:(id)a0 forChoice:(id)a1;

@end
