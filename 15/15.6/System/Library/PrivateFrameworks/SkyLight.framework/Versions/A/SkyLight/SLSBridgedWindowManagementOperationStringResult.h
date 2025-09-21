@class NSString;

@interface SLSBridgedWindowManagementOperationStringResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSString *string;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
