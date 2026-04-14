@interface VCPLogManager : NSObject

@property (readonly) int logLevel;

+ (id)dateFormatter;
+ (id)sharedLogManager;

- (id)init;

@end
