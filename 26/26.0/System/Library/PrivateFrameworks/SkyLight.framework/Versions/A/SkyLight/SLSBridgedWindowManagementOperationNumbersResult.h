@class NSArray;

@interface SLSBridgedWindowManagementOperationNumbersResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *numbers;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNumbers:(id)a0;

@end
