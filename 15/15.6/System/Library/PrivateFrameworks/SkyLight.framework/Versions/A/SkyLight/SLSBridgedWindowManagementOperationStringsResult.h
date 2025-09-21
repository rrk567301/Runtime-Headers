@class NSArray;

@interface SLSBridgedWindowManagementOperationStringsResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *strings;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStrings:(id)a0;

@end
