@class NSButton, NSDictionary, NSPopUpButton;

@interface WFFinderConvertImageActionConfigurationViewController : NSViewController

@property (readonly, nonatomic) NSPopUpButton *formatPicker;
@property (readonly, nonatomic) NSPopUpButton *imageSizePicker;
@property (readonly, nonatomic) NSButton *preservesMetadataButton;
@property (readonly, nonatomic) NSButton *convertButton;
@property (readonly, nonatomic) NSButton *cancelButton;
@property (retain, nonatomic) NSDictionary *sizes;
@property (nonatomic) BOOL sizesAreApproximate;
@property (copy, nonatomic) id /* block */ formatChangedBlock;
@property (copy, nonatomic) id /* block */ descriptorSelectedBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)cancelButtonPressed:(id)a0;
- (id)labelViewWithTitle:(id)a0;
- (void)recomputeImageSizeLabels;
- (BOOL)preservesMetadata;
- (void)selectedFormatChanged:(id)a0;
- (void)convertButtonPressed:(id)a0;
- (void)updateConvertButtonTitle;
- (id)resizeDescriptor;
- (void)setSizes:(id)a0 approximate:(BOOL)a1;

@end
