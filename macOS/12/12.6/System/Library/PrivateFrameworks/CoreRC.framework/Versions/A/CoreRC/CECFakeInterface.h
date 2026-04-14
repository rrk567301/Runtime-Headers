@class NSMutableDictionary;

@interface CECFakeInterface : CECInterface {
    NSMutableDictionary *_properties;
}

+ (id)defaultTVProperties;
+ (id)defaultPlaybackDeviceProperties;

- (void)dealloc;
- (id)properties;
- (id)initWithInterfaceListener:(id)a0 properties:(id)a1;
- (BOOL)errorIsNack:(id)a0;
- (BOOL)sendFrame:(struct CECFrame { unsigned char x0[16]; unsigned char x1 : 5; unsigned char x2 : 3; })a0 withRetryCount:(unsigned char)a1 error:(id *)a2;
- (BOOL)pingTo:(unsigned char)a0 acknowledged:(BOOL *)a1 error:(id *)a2;
- (void)fakePropertiesChanged:(id)a0;
- (void)fakeTerminated;
- (void)fakeHotPlugDetect:(BOOL)a0;

@end
