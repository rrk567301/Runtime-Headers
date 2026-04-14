@class LAUIAuthorizationSheetConfiguration, NSString, NSDictionary, LAUIAuthenticationSheetController, NSWindow;
@protocol LAUIAuthorizationSheetDelegate;

@interface LAUIAuthenticationSheetAdapter : NSObject <LAUIAuthorizationSheet, LAUIAuthenticationSheetDelegate> {
    LAUIAuthenticationSheetController *_sheet;
    LAUIAuthorizationSheetConfiguration *_config;
    NSDictionary *_result;
    NSWindow *_presentationContext;
}

@property (weak, nonatomic) id<LAUIAuthorizationSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)windowNumber;
- (void)unverifiedDataEntered:(unsigned int)a0 completion:(id /* block */)a1;
- (void)presentWithCompletion:(id /* block */)a0;
- (void)setPresentationContext:(id)a0;
- (void)setUpWithConfig:(id)a0;

@end
