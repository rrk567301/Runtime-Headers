@interface VCPLogManager : NSObject

@property (readonly) int logLevel;
@property (readonly) BOOL enableDatabaseLog;

+ (id)dateFormatter;
+ (id)sharedLogManager;
+ (id)dateFormatterDateTime;

- (id)init;

@end
