@class NSArray;

@interface SLSBridgedWindowManagementOperationPropertyListArrayResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *propertyListArray;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyListArray:(id)a0;

@end
