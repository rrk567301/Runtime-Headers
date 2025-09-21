@interface AVB17221AECPAEMRegisterUnsolicitedNotificationsMessage : AVB17221AECPAEMMessage

@property (nonatomic) char timeLimited;
@property (readonly, nonatomic) char messageIs2013Format;

+ (id)keyPathsForValuesAffectingMessageIs2013Format;
+ (id)keyPathsForValuesAffectingTimeLimited;

- (void)setTimeLimited:(char)a0;
- (char)timeLimited;
- (char)messageIs2013Format;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned long long)minimumReceivedCommandSpecificLength;

@end
