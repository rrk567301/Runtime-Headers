@class ABCardViewStyleProvider, ABAPIAdapter, ABRemotePersonView, ABPerson, ABAddressBook;

@interface ABPersonView : NSView <ABPersonViewClientProtocol>

@property (retain, nonatomic) ABAPIAdapter *_APIAdapter;
@property (retain, nonatomic) ABRemotePersonView *_remotePersonView;
@property (retain, nonatomic) ABCardViewStyleProvider *styleProvider;
@property (retain, nonatomic) ABAddressBook *addressBook;
@property BOOL editing;
@property (retain) ABPerson *person;
@property BOOL shouldShowLinkedPeople;

+ (struct CGSize { double x0; double x1; })defaultContentSize;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)setPerson:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (id)serviceViewControllerProxy;
- (id)hostWindowForShareSheet;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(BOOL)a1;
- (void)setPerson:(id)a0 shouldShowLinkedPeople:(BOOL)a1 shouldShowSuggestedFields:(BOOL)a2;
- (void)startSharingSessionForServiceNamed:(id)a0 listenerEndpoint:(id)a1;
- (void)headerWasClicked;
- (void)desiredHeightChangedTo:(double)a0;
- (void)setShouldShowSuggestedFields:(BOOL)a0;
- (void)edit;

@end
