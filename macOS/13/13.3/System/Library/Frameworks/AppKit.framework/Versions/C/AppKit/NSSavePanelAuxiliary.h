@class NSButton, NSLocalSavePanel;

@interface NSSavePanelAuxiliary : NSObject {
    int _remotePID;
    struct { unsigned int val[8]; } _auditToken;
}

@property (retain, nonatomic) NSLocalSavePanel *retainedSavePanel;
@property (weak, nonatomic) id modalDelegate;
@property (nonatomic) SEL modalDelegateDidEndSelector;
@property (nonatomic) void *contextInfo;
@property (weak, nonatomic) NSButton *currentAlertCancelButton;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) double _alertStyleMinWidth;

- (void).cxx_destruct;

@end
