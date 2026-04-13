@class NSArray, NSSavePanelCustomAction;

@interface _NSSavePanel_CustomActionContext : NSObject

@property (weak) NSSavePanelCustomAction *action;
@property (retain) NSArray *urlsToActOn;

- (void)dealloc;
- (void).cxx_destruct;

@end
