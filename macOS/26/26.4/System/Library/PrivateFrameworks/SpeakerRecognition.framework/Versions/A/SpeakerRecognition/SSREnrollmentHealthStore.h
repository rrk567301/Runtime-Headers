@interface SSREnrollmentHealthStore : NSObject

+ (id)sharedInstance;

- (void)updateEnrollmentHealthForVoiceProfile:(id)a0 asset:(id)a1 completionHandler:(id /* block */)a2;
- (void)calculateEnrollmentHealthWithVoiceProfile:(id)a0 asset:(id)a1 completionHandler:(id /* block */)a2;

@end
