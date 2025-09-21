@interface NFHardwareControllerInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long siliconVersion;
@property (readonly, nonatomic) unsigned long long siliconName;
@property (readonly, nonatomic) unsigned long long ROMVersion;
@property (readonly, nonatomic) unsigned long long firmwareVersion;
@property (readonly, nonatomic) unsigned long long firmwareRevision;
@property (readonly, nonatomic) unsigned long long middlewareVersion;
@property (readonly, nonatomic) char hasAntenna;
@property (readonly, nonatomic) char hasIcfResistor;
@property (readonly, nonatomic) char hasMFW;
@property (readonly, nonatomic) char hasHLMSupport;
@property (readonly, nonatomic) char hasLPEMSupport;
@property (readonly, nonatomic) char poweredRunDuringSleep;
@property (readonly, nonatomic) char hasCarKeySupport;
@property (readonly, nonatomic) char hasReaderModeSupport;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
