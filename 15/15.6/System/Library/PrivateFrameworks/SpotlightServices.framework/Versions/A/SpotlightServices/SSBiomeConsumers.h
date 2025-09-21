@class NSArray;

@interface SSBiomeConsumers : NSObject {
    NSArray *_consumers;
}

+ (char)enabled;
+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;

@end
