@class NSString;

@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding> {
    void /* unknown type, empty encoding */ extensionBundleIdentifier;
    void /* unknown type, empty encoding */ kind;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matchesPersonality:(id)a0;

@end
