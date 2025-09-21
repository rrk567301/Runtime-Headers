@class NSString, STDeviceBedtime, STAllowance, NSDictionary, NSNumber;

@interface STIntroductionViewModel : NSObject

@property char deviceForChild;
@property (copy) NSNumber *appAndWebsiteActivityEnabled;
@property (retain) STDeviceBedtime *bedtime;
@property (retain) STAllowance *allowance;
@property (retain) NSNumber *communicationSafetyEnabled;
@property (retain) NSNumber *screenDistanceEnabled;
@property (retain) NSString *parentalControlsPasscode;
@property (copy) NSString *recoveryAltDSID;
@property (copy) NSDictionary *restrictions;
@property (nonatomic) long long imageGenerationRestriction;

- (void).cxx_destruct;

@end
