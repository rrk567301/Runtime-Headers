@class NSString;

@interface UBThreadInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long tid;
@property (readonly) NSString *threadName;
@property (readonly) unsigned long long dqid;
@property (readonly) NSString *dqLabel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTid:(unsigned long long)a0 threadName:(id)a1 dqid:(unsigned long long)a2 dqLabel:(id)a3;

@end
