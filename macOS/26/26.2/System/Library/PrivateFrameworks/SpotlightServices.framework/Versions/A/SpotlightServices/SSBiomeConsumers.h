@class NSArray;

@interface SSBiomeConsumers : NSObject {
    NSArray *_consumers;
}

+ (id)sharedInstance;
+ (BOOL)enabled;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
