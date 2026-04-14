@class NSArray;

@interface SSBiomeConsumers : NSObject {
    NSArray *_consumers;
}

+ (id)sharedInstance;
+ (BOOL)enabled;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)init;

@end
