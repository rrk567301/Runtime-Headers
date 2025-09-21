@interface NUChannelMatching : NSObject

@property (class, readonly, nonatomic) NUChannelMatching *primary;

+ (id)channel:(id)a0;
+ (id)image:(long long)a0;
+ (id)format:(id)a0;
+ (id)media:(long long)a0;
+ (id)name:(id)a0;
+ (id)type:(long long)a0;
+ (id)video:(long long)a0;

- (BOOL)match:(id)a0;
- (id)subchannel:(id)a0;
- (id)subsequentMatching;

@end
