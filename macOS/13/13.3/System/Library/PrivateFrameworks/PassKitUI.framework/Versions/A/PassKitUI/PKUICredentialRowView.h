@class NSButton, NSImageView, NSTextField;

@interface PKUICredentialRowView : NSTableCellView

@property (weak) NSImageView *cardIcon;
@property (weak) NSTextField *cardSanitizedPrimaryAccountRepresentation;
@property (weak) NSButton *cardSelected;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;

@end
