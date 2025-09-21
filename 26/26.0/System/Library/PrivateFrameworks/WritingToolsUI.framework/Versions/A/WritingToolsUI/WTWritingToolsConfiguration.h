@class NSString, NSView, NSSet, NSResponder, NSObject, WTSmartReplyConfiguration;
@protocol WTWritingToolsDelegate;

@interface WTWritingToolsConfiguration : NSObject <NSCopying>

@property (nonatomic) long long requestedTool;
@property (retain, nonatomic) NSString *prompt;
@property (weak, nonatomic) NSView *positioningView;
@property (weak, nonatomic) NSView *textView;
@property (nonatomic) unsigned long long preferredEdge;
@property (retain, nonatomic) NSSet *supportedActions;
@property (weak, nonatomic) NSObject<WTWritingToolsDelegate> *writingToolsDelegate;
@property (retain, nonatomic) WTSmartReplyConfiguration *smartReplyConfiguration;
@property (readonly, weak, nonatomic) NSResponder *originalFirstResponder;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } positioningRect;

+ (BOOL)_isSelectionRectTheCursor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)_isValidSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)allDefinedWTActions;

- (long long)writingToolsBehavior;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)panelType;
- (void)setPositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)writingToolsCoordinator;
- (id)configurationWithWritingToolsDelegate:(id)a0;
- (id)initWithRequestedTool:(long long)a0 positioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 positioningView:(id)a2;
- (BOOL)textViewIsEditable;
- (id)configurationWithPreferredEdge:(unsigned long long)a0;
- (id)servicesMenuRequestorReturnType;
- (id)textInputClient;
- (id)_firstClientObjectRespondingTo:(SEL)a0;
- (id)configurationWithRequestedTool:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_asRectInScreenFromTextView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_asRectInTextViewFromScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_clientObjectsToCheck;
- (id)_firstClientObjectConformingToProtocol:(id)a0;
- (id)_firstClientObjectKindOfClass:(Class)a0;
- (id)_firstClientObjectPassingTest:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_unionRectInVisibleSelectedRange;
- (void)_updateOriginalFirstResponder;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_visibleSelectedRange;
- (unsigned long long)allowedResultOptions;
- (BOOL)clientIsAsync;
- (id)configurationWithPositioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)configurationWithPositioningView:(id)a0;
- (id)configurationWithPrompt:(id)a0;
- (id)configurationWithSmartReplyConfiguration:(id)a0;
- (id)configurationWithSupportedActions:(id)a0;
- (id)configurationWithTextView:(id)a0;
- (BOOL)hasOpenEndedAdjust;
- (BOOL)includesTextListMarkersInInlineResults;
- (id)initWithRequestedTool:(long long)a0 prompt:(id)a1 positioningRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 positioningView:(id)a3;
- (BOOL)panelShowsAnchor;
- (id)proposedPasteboardTypes;
- (id)servicesMenuRequestor;
- (id)textInputClientAsync;
- (BOOL)textViewWantsInlineEditing;

@end
