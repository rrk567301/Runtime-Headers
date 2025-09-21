@interface VCPLogManager : NSObject

@property (readonly) int logLevel;
@property (readonly) char enableDatabaseLog;

+ (id)dateFormatter;
+ (id)dateFormatterDateTime;
+ (id)sharedLogManager;

- (id)init;

@end
