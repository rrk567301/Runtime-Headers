@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (id)filterEvent:(id)a0;

@end
