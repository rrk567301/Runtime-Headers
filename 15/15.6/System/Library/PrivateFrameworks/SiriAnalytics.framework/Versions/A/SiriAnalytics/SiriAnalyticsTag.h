@class SiriAnalyticsTagShim;

@interface SiriAnalyticsTag : NSObject <NSSecureCoding> {
    SiriAnalyticsTagShim *_shim;
}

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shim;
- (id)initWithConditionType:(int)a0 requestId:(id)a1 joined:(char)a2;
- (id)initWithConditionType:(int)a0 componentId:(id)a1 componentName:(int)a2 joined:(char)a3;
- (id)initWithConditionType:(int)a0 end:(unsigned long long)a1;
- (id)initWithConditionType:(int)a0 start:(unsigned long long)a1;
- (id)initWithConditionType:(int)a0 start:(unsigned long long)a1 end:(unsigned long long)a2;
- (id)initWithConditionTypeAffectingEntireClock:(int)a0;

@end
