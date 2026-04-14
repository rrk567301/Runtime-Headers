@interface AARawEvent : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ sessionGroup;
    void /* unknown type, empty encoding */ requiresDiagnosticsConsent;
    void /* unknown type, empty encoding */ requiresTrackingConsent;
    void /* unknown type, empty encoding */ timestampGranularity;
    void /* unknown type, empty encoding */ timeDurationGranularity;
    void /* unknown type, empty encoding */ samplingThreshold;
    void /* unknown type, empty encoding */ properties;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 sessionGroup:(id)a1 requiresDiagnosticsConsent:(BOOL)a2 timestampGranularity:(long long)a3 timeDurationGranularity:(long long)a4 properties:(id)a5 samplingThreshold:(long long)a6;
- (id)initWithName:(id)a0 properties:(id)a1;
- (id)initWithName:(id)a0 sessionGroup:(id)a1 requiresDiagnosticsConsent:(BOOL)a2 requiresTrackingConsent:(BOOL)a3 timestampGranularity:(long long)a4 timeDurationGranularity:(long long)a5 properties:(id)a6 samplingThreshold:(long long)a7;
- (id)initWithName:(id)a0 sessionGroup:(id)a1 requiresDiagnosticsConsent:(BOOL)a2 timestampGranularity:(long long)a3 timeDurationGranularity:(long long)a4 properties:(id)a5;
- (id)initWithName:(id)a0 sessionGroup:(id)a1 timestampGranularity:(long long)a2 properties:(id)a3;

@end
