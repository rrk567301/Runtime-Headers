@class NSPopUpButton, NSTextField;

@interface ABCardCollectionMessagingRowView : ABCardCollectionRowView

@property (retain) NSTextField *messagingServiceLabel;
@property (retain) NSPopUpButton *messagingServiceChooserPopup;

- (void)setService:(id)a0;
- (void).cxx_destruct;
- (void)setServiceMenu:(id)a0;
- (void)setServicePopUpEnabled:(BOOL)a0;
- (void)updateTextColors;
- (void)updateValueFontWithFont:(id)a0;

@end
