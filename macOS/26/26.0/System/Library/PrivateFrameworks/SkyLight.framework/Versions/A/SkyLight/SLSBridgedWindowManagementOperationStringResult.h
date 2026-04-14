@class NSString;

@interface SLSBridgedWindowManagementOperationStringResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSString *string;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
