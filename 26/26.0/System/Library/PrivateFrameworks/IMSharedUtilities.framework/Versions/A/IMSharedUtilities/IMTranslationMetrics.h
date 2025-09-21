@interface IMTranslationMetrics : NSObject

+ (id)sharedMetrics;

- (id)init;
- (void)logLanguageCode:(id)a0 forHandles:(id)a1;

@end
