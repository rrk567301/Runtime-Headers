@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage

@property (copy, nonatomic) NSUUID *taskUUID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (id)initWithTaskUUID:(id)a0 name:(id)a1 userInfo:(id)a2;

@end
