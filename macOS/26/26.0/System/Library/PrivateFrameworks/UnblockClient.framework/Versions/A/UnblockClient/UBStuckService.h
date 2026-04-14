@class NSUUID;

@interface UBStuckService : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long threadID;
@property (readonly) int pid;
@property (readonly) double timeElapsed;
@property (readonly) NSUUID *incidentUUID;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initForPid:(int)a0 threadID:(unsigned long long)a1 timeElapsed:(double)a2 incidentUUID:(id)a3;

@end
