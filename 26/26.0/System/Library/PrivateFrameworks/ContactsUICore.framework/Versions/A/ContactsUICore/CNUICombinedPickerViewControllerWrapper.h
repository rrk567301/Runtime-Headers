@protocol CNUICombinedPickerViewControllerWrapperDelegate;

@interface CNUICombinedPickerViewControllerWrapper : NSObject

@property (weak, nonatomic) id<CNUICombinedPickerViewControllerWrapperDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 clearBackground:(BOOL)a1;
- (id)initWithMemojiMetadata:(id)a0 delegate:(id)a1 clearBackground:(BOOL)a2;

@end
