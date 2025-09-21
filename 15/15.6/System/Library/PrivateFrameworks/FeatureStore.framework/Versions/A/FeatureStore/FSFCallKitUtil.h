@class CXCallObserver;

@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)isOnCall;

@end
