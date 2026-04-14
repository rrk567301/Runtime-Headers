@protocol EWSAutodiscoverV2BindingDelegate;

@interface EWSAutodiscoverV2Binding : NSObject

@property (readonly, weak, nonatomic) id<EWSAutodiscoverV2BindingDelegate> delegate;
@property (nonatomic) BOOL isOnPrem;
@property BOOL logsActivity;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 withProtocol:(id)a1 retrieveAuthURI:(BOOL)a2;

@end
