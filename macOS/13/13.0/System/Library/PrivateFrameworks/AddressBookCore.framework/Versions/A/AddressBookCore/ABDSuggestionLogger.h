@class NSString;

@interface ABDSuggestionLogger : NSObject <ABSuggestionLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultLogger;
+ (id)loggerWithLogCategory:(id)a0;
+ (id)sanitizingLoggerWithLogger:(id)a0;
+ (id)loggerWithLoggers:(id)a0;
+ (id)allLoggers;

- (void)logPairs:(id)a0 withMessage:(id)a1;

@end
