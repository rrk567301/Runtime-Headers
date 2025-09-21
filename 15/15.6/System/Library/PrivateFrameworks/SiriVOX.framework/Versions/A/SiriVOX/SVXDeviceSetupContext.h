@class NSDate, SVXDeviceSetupOptions, SVXDeviceSetupFlowScene;

@interface SVXDeviceSetupContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) SVXDeviceSetupOptions *options;
@property (readonly, copy, nonatomic) SVXDeviceSetupFlowScene *flowScene;
@property (readonly, copy, nonatomic) NSDate *beginDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithTimestamp:(unsigned long long)a0 options:(id)a1;
- (id)initWithTimestamp:(unsigned long long)a0 options:(id)a1 flowScene:(id)a2;
- (id)initWithTimestamp:(unsigned long long)a0 options:(id)a1 flowScene:(id)a2 beginDate:(id)a3 endDate:(id)a4;
- (id)initWithTimestamp:(unsigned long long)a0 presentsAlternativeFlowWhenStoreAccountIsUnavailable:(char)a1;

@end
