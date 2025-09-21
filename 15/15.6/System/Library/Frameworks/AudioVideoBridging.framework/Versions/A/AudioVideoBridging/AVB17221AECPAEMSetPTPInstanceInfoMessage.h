@interface AVB17221AECPAEMSetPTPInstanceInfoMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) char setPriority1;
@property (nonatomic) char setPriority2;
@property (nonatomic) char setDomainNumber;
@property (nonatomic) char setInstanceEnabled;
@property (nonatomic) char setExternalConfigurationEnabled;
@property (nonatomic) char setSlaveOnly;
@property (nonatomic) unsigned char priority1;
@property (nonatomic) unsigned char priority2;
@property (nonatomic) unsigned char domainNumber;
@property (nonatomic) char instanceEnabled;
@property (nonatomic) char externalConfigurationEnabled;
@property (nonatomic) char slaveOnly;

+ (id)keyPathsForValuesAffectingDomainNumber;
+ (id)keyPathsForValuesAffectingExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingInstanceEnabled;
+ (id)keyPathsForValuesAffectingPriority1;
+ (id)keyPathsForValuesAffectingPriority2;
+ (id)keyPathsForValuesAffectingSetDomainNumber;
+ (id)keyPathsForValuesAffectingSetExternalConfigurationEnabled;
+ (id)keyPathsForValuesAffectingSetInstanceEnabled;
+ (id)keyPathsForValuesAffectingSetPriority1;
+ (id)keyPathsForValuesAffectingSetPriority2;
+ (id)keyPathsForValuesAffectingSetSlaveOnly;
+ (id)keyPathsForValuesAffectingSlaveOnly;

- (id)init;
- (char)instanceEnabled;
- (char)setDomainNumber;
- (char)setExternalConfigurationEnabled;
- (unsigned char)domainNumber;
- (char)externalConfigurationEnabled;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned char)priority1;
- (unsigned char)priority2;
- (void)setDomainNumber:(unsigned char)a0;
- (void)setExternalConfigurationEnabled:(char)a0;
- (char)setInstanceEnabled;
- (void)setInstanceEnabled:(char)a0;
- (char)setPriority1;
- (void)setPriority1:(unsigned char)a0;
- (char)setPriority2;
- (void)setPriority2:(unsigned char)a0;
- (void)setSetDomainNumber:(char)a0;
- (void)setSetExternalConfigurationEnabled:(char)a0;
- (void)setSetInstanceEnabled:(char)a0;
- (void)setSetPriority1:(char)a0;
- (void)setSetPriority2:(char)a0;
- (void)setSetSlaveOnly:(char)a0;
- (char)setSlaveOnly;
- (void)setSlaveOnly:(char)a0;
- (char)slaveOnly;

@end
