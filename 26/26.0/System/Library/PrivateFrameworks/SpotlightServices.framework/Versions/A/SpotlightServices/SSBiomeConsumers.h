@class NSArray;

@interface SSBiomeConsumers : NSObject {
    NSArray *_consumers;
}

+ (id)sharedInstance;
+ (BOOL)enabled;

- (void)start;
- (void)stop;
- (id)init;
- (void).cxx_destruct;

@end
