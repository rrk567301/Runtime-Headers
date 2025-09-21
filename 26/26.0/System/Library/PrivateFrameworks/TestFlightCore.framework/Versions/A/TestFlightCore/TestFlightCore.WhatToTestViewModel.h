@interface TestFlightCore.WhatToTestViewModel : _TtCs12_SwiftObject <TestFlightCore.WhatToTestInterface> {
    void /* unknown type, empty encoding */ _dataModel;
    void /* unknown type, empty encoding */ _howToDataModel;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _imageURL;
    void /* unknown type, empty encoding */ _subtitles;
    void /* unknown type, empty encoding */ _title;
    void /* unknown type, empty encoding */ _iconNeedsMask;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)showAppLockup:(id)a0 subtitles:(id)a1 imageTemplateURL:(id)a2 iconNeedsMask:(BOOL)a3;
- (void)showHowToScreenWithTitle:(id)a0 subtitle:(id)a1 deviceImage:(id)a2 shortcutImage:(id)a3 primaryButtonTitle:(id)a4 secondaryButtonTitle:(id)a5;
- (void)showTestNotesWithTitle:(id)a0 testNotesTitle:(id)a1 testNotesText:(id)a2 primaryButtonTitle:(id)a3;

@end
