@class NSString, XCAccessibilityElement;

@interface XCAXAuditResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) NSString *longDescription;
@property (copy, nonatomic) XCAccessibilityElement *element;
@property (nonatomic) long long issueCode;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
