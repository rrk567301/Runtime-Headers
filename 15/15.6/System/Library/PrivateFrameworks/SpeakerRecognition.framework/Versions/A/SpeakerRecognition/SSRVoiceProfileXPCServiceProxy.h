@interface SSRVoiceProfileXPCServiceProxy : NSObject

+ (id)sharedInstance;

- (char)fetchEnrollmentStatusForSiriProfileId:(id)a0 forLanguageCode:(id)a1;

@end
