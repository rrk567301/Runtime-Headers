@class NSString, EWSAutodiscoverOperation;
@protocol EWSAutodiscoverBindingDelegate;

@interface EWSAutodiscoverBinding : NSObject

@property (weak, nonatomic) EWSAutodiscoverOperation *operation;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, weak, nonatomic) id<EWSAutodiscoverBindingDelegate> delegate;
@property BOOL logsActivity;

- (void)sendMessage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 delegate:(id)a1;

@end
