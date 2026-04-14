@class NSUUID;

@interface CATTaskMessage : CATMessage

@property (copy, nonatomic) NSUUID *taskUUID;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTaskUUID:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
