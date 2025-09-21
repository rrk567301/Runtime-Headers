@class NSArray;

@interface AVB17221AECPAEMGetAVBInfoResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned long long gPTPGrandmasterID;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned char gPTPDomainNumber;
@property (nonatomic) char asCapable;
@property (nonatomic) char gPTPEnabled;
@property (nonatomic) char srpEnabled;
@property (nonatomic) char avtpDown;
@property (nonatomic) char avtpDownValid;
@property (copy, nonatomic) NSArray *msrpMappings;

+ (id)keyPathsForValuesAffectingAsCapable;
+ (id)keyPathsForValuesAffectingPropagationDelay;
+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingAvtpDown;
+ (id)keyPathsForValuesAffectingAvtpDownValid;
+ (id)keyPathsForValuesAffectingGPTPDomainNumber;
+ (id)keyPathsForValuesAffectingGPTPEnabled;
+ (id)keyPathsForValuesAffectingGPTPGrandmasterID;
+ (id)keyPathsForValuesAffectingMsrpMappings;
+ (id)keyPathsForValuesAffectingSrpEnabled;

- (id)init;
- (char)asCapable;
- (unsigned int)propagationDelay;
- (void)setAsCapable:(char)a0;
- (void)setPropagationDelay:(unsigned int)a0;
- (void)setGPTPEnabled:(char)a0;
- (char)avtpDown;
- (char)avtpDownValid;
- (unsigned char)gPTPDomainNumber;
- (char)gPTPEnabled;
- (unsigned long long)gPTPGrandmasterID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setAvtpDown:(char)a0;
- (void)setAvtpDownValid:(char)a0;
- (void)setGPTPDomainNumber:(unsigned char)a0;
- (void)setGPTPGrandmasterID:(unsigned long long)a0;
- (void)setSrpEnabled:(char)a0;
- (char)srpEnabled;

@end
