@class NSError;

@interface _LTTranslationToolKit : NSObject

+ (void)launchAppWithCompletionHandler:(void (^)(NSError *))a0;
+ (void)startPersonalTranslationSession:(id /* block */)a0;

- (id)init;

@end
