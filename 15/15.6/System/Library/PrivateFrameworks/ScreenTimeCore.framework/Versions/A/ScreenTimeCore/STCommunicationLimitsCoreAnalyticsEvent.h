@class NSString, NSDictionary;

@interface STCommunicationLimitsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent>

@property (readonly) char communicationLimited;
@property (readonly) char contactManagementEnabled;
@property (readonly) char contactEditingAllowed;
@property (readonly) long long userAgeGroup;
@property (readonly) char userIsRemote;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

@end
