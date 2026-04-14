@class NSUUID, AceObject, NSViewController;
@protocol SiriUIViewController;

@interface SiriUITranscriptItem : NSObject

@property (copy, nonatomic) NSUUID *itemIdentifier;
@property (retain, nonatomic) NSViewController<SiriUIViewController> *viewController;
@property (retain, nonatomic) AceObject *aceObject;
@property (nonatomic) BOOL snippetViewControllerHasBeenUnloaded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousFrame;

+ (id)transcriptItemWithAceObject:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithAceObject:(id)a0;

@end
