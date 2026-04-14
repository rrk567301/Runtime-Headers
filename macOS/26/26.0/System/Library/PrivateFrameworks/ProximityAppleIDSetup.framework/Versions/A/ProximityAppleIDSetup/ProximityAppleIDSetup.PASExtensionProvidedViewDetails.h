@class NSString;

@interface ProximityAppleIDSetup.PASExtensionProvidedViewDetails : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ proxCardSubtitle;
    void /* unknown type, empty encoding */ biometricsNotEnrolledErrorSubtitle;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
