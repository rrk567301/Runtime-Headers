@class NSString;

@interface SKDEnvironmentVariablesProvider : NSObject <SpotlightKnowledgeDaemon.SKDEnvironmentVariablesProviding>

@property (nonatomic, readonly) NSString *indexPath;
@property (nonatomic, readonly) BOOL useTestIndex;

- (id)init;

@end
