@class NSString;

@interface ProximityAppleIDSetup.PASExtensionProvidedViewDetails : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ proxCardSubtitle;
    void /* unknown type, empty encoding */ biometricsNotEnrolledErrorSubtitle;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
