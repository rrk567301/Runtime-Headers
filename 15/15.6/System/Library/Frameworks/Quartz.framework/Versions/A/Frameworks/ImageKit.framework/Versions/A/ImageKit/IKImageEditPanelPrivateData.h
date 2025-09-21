@class IKTabView, IKImageEditFrame, IKImageEditDSHandler, IKImageEditView;

@interface IKImageEditPanelPrivateData : NSObject

@property IKImageEditFrame *backgroundView;
@property id imageView;
@property id dataSource;
@property IKTabView *tabView;
@property IKImageEditView *currentTab;
@property IKImageEditDSHandler *dsHandler;
@property struct CGPoint { double x; double y; } mouseDownLocation;
@property char mouseDownMovesWindow;
@property char dataSourceIsIKImageView;
@property char hasAdjustMode;
@property char hasEffectsMode;
@property char hasDetailsMode;

@end
