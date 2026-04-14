@class NSDictionary;

@interface SLSBridgedWindowManagementOperationPropertyListDictionaryResult : SLSBridgedWindowManagementOperationResult

@property (readonly, copy) NSDictionary *propertyListDictionary;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyListDictionary:(id)a0;

@end
