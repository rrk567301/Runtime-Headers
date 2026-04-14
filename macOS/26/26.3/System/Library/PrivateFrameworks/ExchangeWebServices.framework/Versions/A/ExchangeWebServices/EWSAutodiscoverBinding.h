@class NSString, EWSAutodiscoverOperation;
@protocol EWSAutodiscoverBindingDelegate;

@interface EWSAutodiscoverBinding : NSObject

@property (weak, nonatomic) EWSAutodiscoverOperation *operation;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, weak, nonatomic) id<EWSAutodiscoverBindingDelegate> delegate;
@property BOOL logsActivity;

- (id)init;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 delegate:(id)a1;

@end
