@class NSString;

@interface PXSTextField : NSTextField

@property (copy, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } padding;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (void)setCell:(id)a0;
- (void)_updateCell;
- (void)_invalidateCell;

@end
