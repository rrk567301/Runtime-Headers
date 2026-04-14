@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environmentName;
@property (readonly, copy, nonatomic) NSString *namedDelegatePort;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
