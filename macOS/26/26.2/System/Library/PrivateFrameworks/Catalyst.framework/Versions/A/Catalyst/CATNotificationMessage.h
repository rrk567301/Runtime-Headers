@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage

@property (copy, nonatomic) NSUUID *taskUUID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)initWithTaskUUID:(id)a0 name:(id)a1 userInfo:(id)a2;

@end
