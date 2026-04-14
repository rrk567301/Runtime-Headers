@interface VCPLogManager : NSObject

@property (readonly) int logLevel;
@property (readonly) BOOL enableDatabaseLog;

+ (id)sharedLogManager;
+ (id)dateFormatterDateTime;
+ (id)dateFormatter;

- (id)init;

@end
