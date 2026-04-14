@class NSMutableDictionary;

@interface CBBrightestALSFilter : CBFilter {
    NSMutableDictionary *_alsEvents;
}

- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)forgetDataForService:(struct __IOHIDServiceClient { } *)a0;
- (id)filterEvent:(id)a0;
- (BOOL)displayBrightnessFactorPropertyHandler:(id)a0;
- (void)dealloc;
- (id)init;

@end
