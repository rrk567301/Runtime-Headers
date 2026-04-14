@class NSString, LAContext;
@protocol LARightContextHandlerDelegate;

@interface LARightContextHandler : NSObject <LACContextObserver>

@property (weak, nonatomic) id<LARightContextHandlerDelegate> delegate;
@property (retain, nonatomic) LAContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
