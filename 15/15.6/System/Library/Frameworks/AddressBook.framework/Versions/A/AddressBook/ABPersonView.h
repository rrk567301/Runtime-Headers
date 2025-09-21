@class ABCardViewStyleProvider, ABAPIAdapter, ABRemotePersonView, ABPerson, ABAddressBook;

@interface ABPersonView : NSView <ABPersonViewClientProtocol>

@property (retain, nonatomic) ABAPIAdapter *_APIAdapter;
@property (retain, nonatomic) ABRemotePersonView *_remotePersonView;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (retain, nonatomic) ABAddressBook *addressBook;
@property char editing;
@property (retain) ABPerson *person;
@property char shouldShowLinkedPeople;

+ (struct CGSize { double x0; double x1; })defaultContentSize;

- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setPerson:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)serviceViewControllerProxy;
- (void)desiredHeightChangedTo:(double)a0;
- (void)headerWasClicked;
- (id)hostWindowForShareSheet;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(char)a1;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(char)a1 shouldShowSuggestedFields:(char)a2;
- (void)setShouldShowSuggestedFields:(char)a0;
- (void)startSharingSessionForServiceNamed:(id)a0 listenerEndpoint:(id)a1;
- (void)edit;

@end
