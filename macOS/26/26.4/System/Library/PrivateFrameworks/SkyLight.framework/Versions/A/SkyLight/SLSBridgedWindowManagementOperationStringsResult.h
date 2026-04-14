@class NSArray;

@interface SLSBridgedWindowManagementOperationStringsResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *strings;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStrings:(id)a0;

@end
