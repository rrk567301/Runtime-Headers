@class NSMutableDictionary;

@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}

+ (unsigned char)getCachePolicyForSelector:(SEL)a0;
+ (SEL)getCacheableSelectorForNotification:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)handleNotification:(id)a0;
- (void)handleDisconnection;
- (void)handleValue:(id)a0 forSelector:(SEL)a1;
- (id)valueForSelector:(SEL)a0;

@end
