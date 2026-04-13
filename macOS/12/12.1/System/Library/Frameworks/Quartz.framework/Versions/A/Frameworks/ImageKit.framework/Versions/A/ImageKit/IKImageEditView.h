@class IKImageEditPanel;

@interface IKImageEditView : NSView

@property IKImageEditPanel *imageEditPanel;
@property id dataSource;
@property BOOL dataSourceIsIKImageView;

+ (id)sharedImageEditView;

- (void)dataSourceDidChange;
- (void)viewWillBecomeActive;
- (void)viewWillBecomeInActive;
- (void)setDataSource:(id)a0 imageEditPanel:(id)a1;

@end
