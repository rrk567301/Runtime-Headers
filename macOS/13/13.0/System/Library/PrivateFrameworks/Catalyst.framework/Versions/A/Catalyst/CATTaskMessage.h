@class NSUUID;

@interface CATTaskMessage : CATMessage

@property (copy, nonatomic) NSUUID *taskUUID;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTaskUUID:(id)a0;

@end
