@class NSColor, NSString, NSImage, NSAttributedString, NSFont;

@interface _MKPlaceBusinessInfoItem : NSObject {
    NSString *_displayString;
    BOOL _isAvailable;
    NSAttributedString *_formattedDisplayString;
    NSFont *_font;
    NSColor *_textColor;
    NSString *_symbolName;
}

@property (readonly, nonatomic) NSString *amenityString;
@property (readonly, nonatomic) NSImage *amenityIcon;
@property (readonly, nonatomic) NSAttributedString *displayString;

+ (id)itemWithDescription:(id)a0 availability:(BOOL)a1 symbolName:(id)a2;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0 textColor:(id)a1;
- (id)_resolvedAvailabilityIconWithFont:(id)a0 textColor:(id)a1;

@end
