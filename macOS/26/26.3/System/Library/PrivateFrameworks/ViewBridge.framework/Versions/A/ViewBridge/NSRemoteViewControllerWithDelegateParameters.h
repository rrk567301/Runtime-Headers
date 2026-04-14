@protocol NSRemoteViewControllerDelegate;

@interface NSRemoteViewControllerWithDelegateParameters : NSRemoteViewControllerParameters

@property (retain) id<NSRemoteViewControllerDelegate> delegate;

@end
