@class NSURL, NSString;

@interface PKPassVerificationURLMethod : PKPassVerificationMethod

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *websiteName;
@property (readonly, nonatomic) unsigned long long strategy;

+ (BOOL)supportsSecureCoding;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)typeDescription;
- (void)_appendDescription:(id)a0;
- (id)_initWithChannel:(id)a0;
- (id)legacyChannelRepresentation;
- (BOOL)needsServerRequest;
- (id)supplementalTypeDescription;
- (BOOL)supportedOnCurrentDevice;

@end
