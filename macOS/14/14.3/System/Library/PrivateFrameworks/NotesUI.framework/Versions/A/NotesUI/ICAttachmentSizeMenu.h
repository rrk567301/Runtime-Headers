@class NSString, NSArray;

@interface ICAttachmentSizeMenu : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) short preferredViewSize;
@property (copy, nonatomic) NSArray *supportedSizes;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selectedSizeAction;
@property (readonly, nonatomic) BOOL isOverrideVariant;

- (void).cxx_destruct;
- (id)createMenuItem;
- (id)initWithTitle:(id)a0 preferredViewSize:(short)a1 supportedSizes:(id)a2 isOverrideVariant:(BOOL)a3 target:(id)a4 selectedSizeAction:(SEL)a5;
- (id)localizedTitleForSize:(short)a0;
- (id)menuItemForSize:(short)a0;

@end
