@class NSString, NSArray, NSDictionary;

@interface CLSHolidayCalendarEventOverrides : NSObject

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) NSArray *dateRuleOverrides;
@property (readonly, nonatomic) double locationScore;
@property (readonly, nonatomic) NSDictionary *sceneImportanceOverrides;

- (void).cxx_destruct;
- (id)sceneImportanceStringForSceneName:(id)a0;
- (id)initWithUUID:(id)a0 countryCode:(id)a1 dateRuleOverrides:(id)a2 locationScore:(double)a3 sceneImportanceOverrides:(id)a4;

@end
