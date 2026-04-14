@class NSString, NSDictionary, NSSavePanel, IKSaveOptionsHandler;

@interface IKSaveOptions : NSObject {
    void *_privateData;
    id _saveOptionsView;
}

@property (retain) IKSaveOptionsHandler *handler;
@property (retain) NSSavePanel *savePanel;
@property (copy) NSString *imageUTTypePriv;
@property (retain) NSDictionary *imagePropertiesPriv;
@property (nonatomic) id delegate;
@property (readonly, nonatomic) NSDictionary *imageProperties;
@property (readonly, nonatomic) NSString *imageUTType;
@property (readonly, nonatomic) NSDictionary *userSelection;
@property (nonatomic) BOOL rememberLastSetting;

- (void)setCanCalculateEstimatedSize:(BOOL)a0;
- (void)savePanelDidEndSheet:(id)a0;
- (id)findButtonWithPrompt:(id)a0 inView:(id)a1;
- (void)updateImageProperties:(id)a0 imageUTType:(id)a1;
- (void)setEstimatedFileSize:(id)a0;
- (id)pdfOptions;
- (BOOL)imagePropertiesAreEqualTo:(id)a0 forType:(id)a1;
- (id)initWithImageProperties:(id)a0 imageUTType:(id)a1;
- (void)addSaveOptionsAccessoryViewToSavePanel:(id)a0;
- (void)updateFileExtensions;
- (void)setOKButtonDisabled:(BOOL)a0;
- (void)addSaveOptionsToView:(id)a0;
- (void)setShowsOrientationCheckbox:(BOOL)a0;
- (BOOL)showsOrientationCheckbox;
- (void)setOrientationCheckboxValue:(BOOL)a0;
- (BOOL)orientationCheckboxValue;
- (void)syncMetaData:(id)a0;
- (void)setPDFOptions:(id)a0;

@end
