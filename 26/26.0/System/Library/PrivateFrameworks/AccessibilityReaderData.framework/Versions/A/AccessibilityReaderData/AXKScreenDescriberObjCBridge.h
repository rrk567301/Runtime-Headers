@class AXKScreenDescriber, NSString, NSObject;
@protocol OS_dispatch_queue, AXKScreenDescriberObjCBridgeDelegate;

@interface AXKScreenDescriberObjCBridge : NSObject <AXKScreenDescriberDelegate>

@property (nonatomic) BOOL isStarted;
@property (retain, nonatomic) AXKScreenDescriber *screenDescriber;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) id<AXKScreenDescriberObjCBridgeDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (void)describeContentOfFocusedWindow;
- (void)describeContentOfWindow:(id)a0;
- (void)screenDescriberContentNotFoundForElement:(id)a0;
- (void)screenDescriberDidFinishDescribingElements:(id)a0;
- (id)_createArticlesFromContent:(id)a0;
- (id)_removeInvalidCharacters:(id)a0;
- (void)describeContentOfApplication:(int)a0;

@end
