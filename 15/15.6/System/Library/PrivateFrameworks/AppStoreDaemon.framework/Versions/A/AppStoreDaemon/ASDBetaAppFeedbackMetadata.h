@class NSString, ASDBetaAppVersion;

@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *incidentID;
@property (copy) NSString *email;
@property (copy) ASDBetaAppVersion *version;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
