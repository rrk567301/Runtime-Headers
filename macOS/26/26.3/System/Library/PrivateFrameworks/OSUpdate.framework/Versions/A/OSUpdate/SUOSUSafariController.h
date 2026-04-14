@class SUOSUClient, NSString, SUOSUProduct, SUOSUSafariUpdateContent;
@protocol SUOSUSafariControllerDelegate;

@interface SUOSUSafariController : NSObject <SUOSUClientDelegate>

@property (readonly, weak) id<SUOSUSafariControllerDelegate> delegate;
@property (readonly) SUOSUClient *client;
@property (retain) SUOSUProduct *productToDisplay;
@property (retain) SUOSUSafariUpdateContent *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)client:(id)a0 availableUpdatesChanged:(id)a1;
- (id)_loadContentFromProduct:(id)a0;
- (id)_selectProductForDisplayFromProducts:(id)a0;

@end
