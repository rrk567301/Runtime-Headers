@class NSTextField, TBorderedView, NSObject, TCPAddressField;
@protocol TChooseParticipantsDelegate;

@interface TChooseParticipantsViewController : NSViewController {
    TCPAddressField *_addressField;
    TBorderedView *_borderedView;
    NSTextField *_addressLabel;
    NSObject<TChooseParticipantsDelegate> *_weakDelegate;
}

@property (weak, nonatomic) NSObject<TChooseParticipantsDelegate> *delegate;
@property (getter=isEnabled) BOOL enabled;

- (id)recipients;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPlaceholderString:(id)a0;
- (void)configureView;
- (void)makeFirstResponder;
- (BOOL)showing;
- (BOOL)addressingComplete;
- (void)receivedControlTextDidChangeNotification;

@end
