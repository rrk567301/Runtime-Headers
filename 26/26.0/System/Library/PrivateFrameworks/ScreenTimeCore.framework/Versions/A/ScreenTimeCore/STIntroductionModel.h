@class NSString, NSDictionary, NSDateComponents, NSNumber;

@interface STIntroductionModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *isAppAndWebsiteActivityEnabled;
@property (copy) NSDateComponents *downtimeStartTime;
@property (copy) NSDateComponents *downtimeEndTime;
@property (copy) NSDictionary *restrictions;
@property (nonatomic) long long imageGenerationRestriction;
@property (copy) NSString *passcode;
@property long long communicationPolicy;
@property long long communicationWhileLimitedPolicy;
@property (copy) NSNumber *isContactEditingDisabled;
@property (copy) NSNumber *isContactManagementEnabled;
@property (copy) NSNumber *isCommunicationSafetyEnabled;
@property (copy) NSNumber *isEyeReliefEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAppAndWebsiteActivityEnabled:(id)a0 downtimeStartTime:(id)a1 downtimeEndTime:(id)a2 restrictions:(id)a3 passcode:(id)a4 communicationSafetyEnabled:(id)a5 eyeReliefEnabled:(id)a6;
- (id)initWithAppAndWebsiteActivityEnabled:(id)a0 downtimeStartTime:(id)a1 downtimeEndTime:(id)a2 restrictions:(id)a3 passcode:(id)a4 communicationSafetyEnabled:(id)a5 eyeReliefEnabled:(id)a6 imageGenerationRestriction:(long long)a7;
- (id)initWithAppAndWebsiteActivityEnabled:(id)a0 downtimeStartTime:(id)a1 downtimeEndTime:(id)a2 restrictions:(id)a3 passcode:(id)a4 communicationSafetyEnabled:(id)a5 eyeReliefEnabled:(id)a6 imageGenerationRestriction:(long long)a7 communicationPolicy:(long long)a8 communicationWhileLimitedPolicy:(long long)a9 contactEditingDisabled:(id)a10 contactManagementEnabled:(id)a11;

@end
