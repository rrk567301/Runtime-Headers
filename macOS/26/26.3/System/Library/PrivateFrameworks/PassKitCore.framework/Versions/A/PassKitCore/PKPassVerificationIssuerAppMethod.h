@class NSArray, NSURL, NSString;

@interface PKPassVerificationIssuerAppMethod : PKPassVerificationMethod

@property (readonly, nonatomic) NSArray *appIdentifiers;
@property (readonly, nonatomic) NSURL *appLaunchURL;
@property (readonly, nonatomic) NSString *appName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)_initWithChannel:(id)a0;
- (id)legacyChannelRepresentation;
- (BOOL)needsServerRequest;
- (id)supplementalTypeDescription;
- (BOOL)supportedOnCurrentDevice;

@end
