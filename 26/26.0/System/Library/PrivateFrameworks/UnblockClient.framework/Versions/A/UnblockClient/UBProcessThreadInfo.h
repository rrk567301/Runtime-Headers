@class UBThreadInfo, UBProcessInfo;

@interface UBProcessThreadInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) UBProcessInfo *process;
@property (readonly) UBThreadInfo *thread;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProcess:(id)a0 thread:(id)a1;

@end
