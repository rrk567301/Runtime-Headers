@interface SiriAnalyticsLogicalClockSummary : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ clockIdentifier;
    void /* unknown type, empty encoding */ derivativeClockIdentifiers;
    void /* unknown type, empty encoding */ active;
    void /* unknown type, empty encoding */ startedOn;
    void /* unknown type, empty encoding */ endedOn;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
