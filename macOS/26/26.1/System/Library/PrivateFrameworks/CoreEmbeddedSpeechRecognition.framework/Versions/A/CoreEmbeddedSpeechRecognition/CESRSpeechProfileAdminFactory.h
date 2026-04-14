@class NSObject;
@protocol CESRSpeechProfileAdminServiceProvider, OS_dispatch_queue;

@interface CESRSpeechProfileAdminFactory : NSObject <CESRSpeechProfileAdminProvider> {
    NSObject<CESRSpeechProfileAdminServiceProvider> *_serviceProvider;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedAdminFactory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceProvider:(id)a0;
- (id)admin;

@end
