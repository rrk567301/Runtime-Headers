@class NSArray;

@interface SLSBridgedWindowManagementOperationNumbersResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *numbers;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNumbers:(id)a0;

@end
