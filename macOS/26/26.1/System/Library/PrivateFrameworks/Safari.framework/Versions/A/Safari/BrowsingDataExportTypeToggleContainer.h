@class NSProgressIndicator, NSSwitch, NSTextField;

@interface BrowsingDataExportTypeToggleContainer : NSStackView

@property (readonly, nonatomic) NSTextField *numberOfItemsToExportLabel;
@property (readonly, nonatomic) NSProgressIndicator *numberOfItemsToExportSpinner;
@property (readonly, nonatomic) NSSwitch *toggle;
@property (readonly, nonatomic) unsigned long long exportDataType;

- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)hideSpinnerAndUpdateBrowsingDataExportTypeCount:(unsigned long long)a0;
- (id)initWithExportDataType:(unsigned long long)a0;
- (void)showSpinnerForComputingBrowsingDataExportTypeCount;

@end
