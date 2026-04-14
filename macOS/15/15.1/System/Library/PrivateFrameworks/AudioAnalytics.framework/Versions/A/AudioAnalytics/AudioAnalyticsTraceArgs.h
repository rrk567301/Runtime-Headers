@interface AudioAnalyticsTraceArgs : NSObject

@property (nonatomic) unsigned long long arg1;
@property (nonatomic) unsigned long long arg2;
@property (nonatomic) unsigned long long arg3;
@property (nonatomic) unsigned long long arg4;

- (id)init;
- (id)initWithArg1:(unsigned long long)a0;
- (id)initWithArg1:(unsigned long long)a0 arg2:(unsigned long long)a1;
- (id)initWithArg1:(unsigned long long)a0 arg2:(unsigned long long)a1 arg3:(unsigned long long)a2;
- (id)initWithArg1:(unsigned long long)a0 arg2:(unsigned long long)a1 arg3:(unsigned long long)a2 arg4:(unsigned long long)a3;

@end
