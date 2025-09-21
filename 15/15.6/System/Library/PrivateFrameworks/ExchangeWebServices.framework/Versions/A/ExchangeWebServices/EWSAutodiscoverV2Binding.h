@protocol EWSAutodiscoverV2BindingDelegate;

@interface EWSAutodiscoverV2Binding : NSObject

@property (readonly, weak, nonatomic) id<EWSAutodiscoverV2BindingDelegate> delegate;
@property (nonatomic) char isOnPrem;
@property char logsActivity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)sendMessage:(id)a0 withProtocol:(id)a1 retrieveAuthURI:(char)a2;

@end
