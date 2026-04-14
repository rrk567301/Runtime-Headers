@class NSString;

@interface AARawDataEvent : NSObject <AADataEventType> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ dictionary;
    void /* unknown type, empty encoding */ requiresDiagnosticsConsent;
    void /* unknown type, empty encoding */ requiresTrackingConsent;
}

@property (class, nonatomic, readonly) NSString *dataName;

- (id)initWithName:(id)a0 dictionary:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)toDict;
- (id)initWithName:(id)a0 dictionary:(id)a1 requiresDiagnosticsConsent:(BOOL)a2;
- (id)initWithName:(id)a0 dictionary:(id)a1 requiresDiagnosticsConsent:(BOOL)a2 requiresTrackingConsent:(BOOL)a3;

@end
