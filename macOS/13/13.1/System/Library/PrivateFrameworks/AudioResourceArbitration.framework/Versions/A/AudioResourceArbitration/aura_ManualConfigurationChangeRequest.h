@class AuRA_IOTopology, AuRA_BoxAcquisitionPreferences, AuRA_ConfigurationHints;
@protocol AuRA_VirtualPort;

@interface AuRA_ManualConfigurationChangeRequest : AuRA_ConfigurationChangeRequest

@property (retain, nonatomic) AuRA_IOTopology *ioTopology;
@property (retain, nonatomic) id<AuRA_VirtualPort> masterVirtualPort;
@property (retain, nonatomic) AuRA_ConfigurationHints *configurationHints;
@property (retain, nonatomic) AuRA_BoxAcquisitionPreferences *boxAcquisitionPreferences;

+ (id)createManualConfigurationChangeRequestWithSessionToken:(unsigned long long)a0 priority:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSessionToken:(unsigned long long)a0 priority:(unsigned int)a1;

@end
