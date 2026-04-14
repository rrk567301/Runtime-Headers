@class CXCallObserver, NSArray, NSString;
@protocol AXLTPhoneCallListenerDelegate;

@interface AXLTPhoneCallListener : NSObject <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (weak, nonatomic) id<AXLTPhoneCallListenerDelegate> delegate;
@property (nonatomic) BOOL isCallActive;
@property (readonly, nonatomic) NSArray *activeCallIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
