@class NSString;

@interface UBProcessInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL is3P;
@property (readonly) int pid;
@property (readonly) NSString *name;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPid:(int)a0 name:(id)a1 is3P:(BOOL)a2;
- (id)telemetryName;

@end
