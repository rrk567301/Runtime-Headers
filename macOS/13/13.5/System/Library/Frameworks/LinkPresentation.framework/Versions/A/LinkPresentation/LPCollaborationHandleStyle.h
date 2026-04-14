@class NSColor, LPPadding, NSFont;

@interface LPCollaborationHandleStyle : NSObject

@property (readonly, retain, nonatomic) NSFont *font;
@property (readonly, retain, nonatomic) NSColor *textColor;
@property (readonly, retain, nonatomic) LPPadding *padding;

- (id)init;
- (void).cxx_destruct;

@end
