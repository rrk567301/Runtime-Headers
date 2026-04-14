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

- (BOOL)matchesPersonality:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
