@class NSString, UXView;

@interface PXToastConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) UXView *contentView;
@property (weak, nonatomic) UXView *sourceView;
@property (nonatomic) double bottomMargin;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *iconSystemImageName;
@property (nonatomic) double autoDismissalDelay;
@property (nonatomic) BOOL canSwipeToDismiss;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
