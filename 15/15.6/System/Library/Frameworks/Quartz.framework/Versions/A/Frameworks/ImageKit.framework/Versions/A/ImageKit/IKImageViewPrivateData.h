@class IKComposer, IKImageBackgroundLayer, IKImageLayer;

@interface IKImageViewPrivateData : NSObject

@property IKComposer *composer;
@property IKImageBackgroundLayer *backgroundLayer;
@property IKImageLayer *imageLayer;
@property id delegate;
@property id trackedView;
@property char initialized;
@property char initalizedWithCoder;
@property char doubleClickOpensEditPanel;
@property char editable;
@property char embedded;
@property char selected;
@property char autoresizes;
@property char supportsDragAndDrop;
@property char needsToReplaceClipView;
@property char isInInterfaceBuilderApp;
@property char isInInterfaceBuilderSimulator;

@end
