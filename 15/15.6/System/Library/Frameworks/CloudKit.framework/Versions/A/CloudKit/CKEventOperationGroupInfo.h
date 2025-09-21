@class NSString;

@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *operationGroupID;
@property (readonly, copy, nonatomic) NSString *operationGroupName;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
