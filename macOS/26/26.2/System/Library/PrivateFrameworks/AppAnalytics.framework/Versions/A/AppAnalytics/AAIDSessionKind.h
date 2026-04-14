@interface AAIDSessionKind : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ name;
}

@property (class, nonatomic, readonly) AAIDSessionKind *userEventsSessionKind;
@property (class, nonatomic, readonly) AAIDSessionKind *telemetrySessionKind;
@property (class, nonatomic, readonly) AAIDSessionKind *realtimeSessionKind;

@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithKind:(long long)a0 name:(id)a1;

@end
