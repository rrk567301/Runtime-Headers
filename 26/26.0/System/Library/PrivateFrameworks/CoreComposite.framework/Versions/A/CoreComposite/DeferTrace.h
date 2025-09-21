@interface DeferTrace : NSObject

@property (nonatomic) unsigned long long code;
@property (nonatomic) unsigned long long arg1;
@property (nonatomic) unsigned long long arg2;
@property (nonatomic) unsigned long long arg3;
@property (nonatomic) unsigned long long arg4;

+ (id)code:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;

- (void)dealloc;
- (id)initWithCode:(unsigned long long)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 arg3:(unsigned long long)a3 arg4:(unsigned long long)a4;

@end
