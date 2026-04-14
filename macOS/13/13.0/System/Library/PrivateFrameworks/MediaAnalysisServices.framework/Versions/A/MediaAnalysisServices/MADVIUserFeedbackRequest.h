@class NSData, NSString;

@interface MADVIUserFeedbackRequest : MADRequest

@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) NSString *reportIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 andReportIdentifier:(id)a1;

@end
