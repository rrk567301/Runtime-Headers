@class NSString, NSData, NSURL, NSNumber;

@interface ISO18013ReaderAuthInfo : NSObject <NSSecureCoding> {
    NSString *_identifier;
    NSString *_organization;
    NSString *_organizationUnit;
    NSData *_iconData;
    NSURL *_iconURL;
    NSString *_iconMediaType;
    NSURL *_privacyPolicyURL;
    NSNumber *_merchantCategoryCode;
    NSData *_certificateData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
