@class NSColor;

@interface MUIAddressTokenAttachmentCell : NSTokenAttachmentCell

@property (nonatomic) unsigned long long attachmentCellColor;
@property BOOL neverShowSeparator;
@property (retain, nonatomic) NSColor *foregroundColor;

+ (id)colorForError;
+ (id)colorForWarning;
+ (id)colorForExternalDomain;

- (void).cxx_destruct;
- (id)_textAttributes;
- (id)tokenTintColor;
- (BOOL)_finalizeStyleTextOptions:(id)a0;

@end
