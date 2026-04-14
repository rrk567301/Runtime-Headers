@class CXCallObserver;

@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)isOnCall;
- (id)init;

@end
