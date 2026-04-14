@class NSLock;

@interface FigPWDKeyExchangeSenderTelementryHelper : NSObject {
    struct __CFDictionary { } *_telemetryDict;
    NSLock *_telemetryLock;
}

- (id)init;
- (void)dealloc;
- (void)setTime:(long long)a0 forKey:(struct __CFString { } *)a1;
- (void)clearTelemetry;
- (void)sendTelemetry;
- (void)setResultCode:(int)a0 forKey:(struct __CFString { } *)a1;
- (void)setTimeRange:(long long)a0 end:(long long)a1 forKey:(struct __CFString { } *)a2;

@end
