@class NSString;

@interface CKAPSMachServiceConnectionKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *environmentName;
@property (readonly, copy, nonatomic) NSString *namedDelegatePort;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnvironmentName:(id)a0 namedDelegatePort:(id)a1;

@end
