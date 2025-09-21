@class NSString;

@interface TRISysctlFactorLevel : NSObject

@property (readonly, nonatomic) NSString *sysctlName;
@property (readonly, nonatomic) long long level;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSysctlName:(id)a0 level:(long long)a1;

@end
