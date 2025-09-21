@class NSArray;

@interface SLSBridgedWindowManagementOperationPropertyListArrayResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSArray *propertyListArray;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyListArray:(id)a0;

@end
