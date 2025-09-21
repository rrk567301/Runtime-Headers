@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environmentName;
@property (readonly, copy, nonatomic) NSString *namedDelegatePort;

- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
