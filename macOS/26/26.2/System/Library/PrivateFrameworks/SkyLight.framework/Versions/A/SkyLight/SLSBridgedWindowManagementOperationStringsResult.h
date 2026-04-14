@class NSArray;

@interface SLSBridgedWindowManagementOperationStringsResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *strings;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStrings:(id)a0;

@end
