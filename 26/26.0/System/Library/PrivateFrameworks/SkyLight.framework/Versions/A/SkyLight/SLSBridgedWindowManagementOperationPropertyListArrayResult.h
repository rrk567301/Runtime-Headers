@class NSArray;

@interface SLSBridgedWindowManagementOperationPropertyListArrayResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *propertyListArray;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListArray:(id)a0;

@end
