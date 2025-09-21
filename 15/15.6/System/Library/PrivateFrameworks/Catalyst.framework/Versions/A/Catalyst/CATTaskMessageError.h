@class NSError;

@interface CATTaskMessageError : CATTaskMessage

@property (retain, nonatomic) NSError *taskError;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskUUID:(id)a0 taskError:(id)a1;

@end
