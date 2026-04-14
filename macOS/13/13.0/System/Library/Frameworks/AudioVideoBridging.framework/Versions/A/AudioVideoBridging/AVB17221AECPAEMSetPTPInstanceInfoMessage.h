@interface AVB17221AECPAEMSetPTPInstanceInfoMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) BOOL setPriority1;
@property (nonatomic) BOOL setPriority2;
@property (nonatomic) BOOL setDomainNumber;
@property (nonatomic) BOOL setInstanceEnabled;
@property (nonatomic) BOOL setExternalConfigurationEnabled;
@property (nonatomic) BOOL setSlaveOnly;
@property (nonatomic) unsigned char priority1;
@property (nonatomic) unsigned char priority2;
@property (nonatomic) unsigned char domainNumber;
@property (nonatomic) BOOL instanceEnabled;
@property (nonatomic) BOOL externalConfigurationEnabled;
@property (nonatomic) BOOL slaveOnly;

+ (id)keyPathsForValuesAffectingSetPriority1;
+ (id)keyPathsForValuesAffectingSetPriority2;
+ (id)keyPathsForValuesAffectingSetDomainNumber;
+ (id)keyPathsForValuesAffectingSetInstanceEnabled;
+ (id)keyPathsForValuesAffectingSetExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingSetSlaveOnly;
+ (id)keyPathsForValuesAffectingPriority1;
+ (id)keyPathsForValuesAffectingPriority2;
+ (id)keyPathsForValuesAffectingDomainNumber;
+ (id)keyPathsForValuesAffectingInstanceEnabled;
+ (id)keyPathsForValuesAffectingExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingSlaveOnly;

- (id)init;
- (unsigned char)priority1;
- (void)setPriority1:(unsigned char)a0;
- (unsigned char)priority2;
- (void)setPriority2:(unsigned char)a0;
- (unsigned char)domainNumber;
- (void)setDomainNumber:(unsigned char)a0;
- (void)setSetPriority1:(BOOL)a0;
- (BOOL)setPriority1;
- (void)setSetPriority2:(BOOL)a0;
- (BOOL)setPriority2;
- (void)setSetDomainNumber:(BOOL)a0;
- (BOOL)setDomainNumber;
- (void)setSetInstanceEnabled:(BOOL)a0;
- (BOOL)setInstanceEnabled;
- (void)setSetExternalConfigurationEnabled:(BOOL)a0;
- (BOOL)setExternalConfigurationEnabled;
- (void)setSetSlaveOnly:(BOOL)a0;
- (BOOL)setSlaveOnly;
- (void)setInstanceEnabled:(BOOL)a0;
- (BOOL)instanceEnabled;
- (void)setExternalConfigurationEnabled:(BOOL)a0;
- (BOOL)externalConfigurationEnabled;
- (void)setSlaveOnly:(BOOL)a0;
- (BOOL)slaveOnly;

@end
