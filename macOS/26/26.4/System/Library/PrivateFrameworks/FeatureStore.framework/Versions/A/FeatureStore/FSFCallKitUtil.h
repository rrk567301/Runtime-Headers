@class CXCallObserver;

@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (BOOL)isOnCall;
- (void).cxx_destruct;
- (id)init;

@end
