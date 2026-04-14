@class LaunchAppIntentResponse, LaunchAppIntent, LaunchAppApplicationResolutionResult;

@interface SiriAppLaunchIntents.LaunchAppIntentHandler : NSObject <LaunchAppIntentHandling> {
    void /* unknown type, empty encoding */ appsSearcher;
    void /* unknown type, empty encoding */ installedApps;
    void /* unknown type, empty encoding */ carPlaySupportProvider;
}

- (id)init;
- (void).cxx_destruct;
- (void)resolveApplicationForLaunchApp:(LaunchAppIntent *)a0 withCompletion:(void (^)(LaunchAppApplicationResolutionResult *))a1;
- (void)confirmLaunchApp:(LaunchAppIntent *)a0 completion:(void (^)(LaunchAppIntentResponse *))a1;
- (void)handleLaunchApp:(LaunchAppIntent *)a0 completion:(void (^)(LaunchAppIntentResponse *))a1;

@end
