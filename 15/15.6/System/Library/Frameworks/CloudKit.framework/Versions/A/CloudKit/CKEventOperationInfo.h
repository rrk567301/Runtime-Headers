@class NSString;

@interface CKEventOperationInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *operationID;
@property (readonly, copy, nonatomic) NSString *operationType;
@property (readonly, copy, nonatomic) NSString *operationGroupID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOperation:(id)a0;

@end
