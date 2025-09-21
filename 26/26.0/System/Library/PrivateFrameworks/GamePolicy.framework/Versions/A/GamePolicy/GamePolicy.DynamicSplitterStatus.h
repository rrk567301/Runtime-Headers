@interface GamePolicy.DynamicSplitterStatus : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ enabled;
    void /* unknown type, empty encoding */ enablementDate;
    void /* unknown type, empty encoding */ disablementDate;
    void /* unknown type, empty encoding */ deviceSupported;
    void /* unknown type, empty encoding */ impactedBundleIdentifiers;
    void /* unknown type, empty encoding */ previouslyImpactedBundleIdentifiers;
    void /* unknown type, empty encoding */ enablementStrategy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_config;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
