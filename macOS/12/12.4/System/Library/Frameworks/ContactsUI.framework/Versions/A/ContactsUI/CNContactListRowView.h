@class NSView, NSVisualEffectView;

@interface CNContactListRowView : NSTableRowView

@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (retain, nonatomic) NSView *separatorView;
@property (nonatomic) long long headerVisualEffectMaterial;

+ (id)rowView;
+ (id)headerRowView;
+ (id)postHeaderRowView;

- (void).cxx_destruct;
- (BOOL)allowsVibrancy;

@end
