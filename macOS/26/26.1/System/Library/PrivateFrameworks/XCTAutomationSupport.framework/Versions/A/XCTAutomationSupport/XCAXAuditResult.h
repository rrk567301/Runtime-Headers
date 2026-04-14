@class NSString, XCAccessibilityElement;

@interface XCAXAuditResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *compactDescription;
@property (copy, nonatomic) NSString *detailedDescription;
@property (copy, nonatomic) XCAccessibilityElement *element;
@property (copy, nonatomic) NSString *auditType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
