@class NSString;

@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding> {
    void /* function */ extensionBundleIdentifier;
    void /* function */ kind;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (BOOL)matchesPersonality:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
