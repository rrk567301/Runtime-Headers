@interface VCPLogManager : NSObject

@property (readonly) int logLevel;

+ (id)dateFormatter;
+ (id)dateFormatterDate;
+ (id)sharedLogManager;

- (id)init;

@end
