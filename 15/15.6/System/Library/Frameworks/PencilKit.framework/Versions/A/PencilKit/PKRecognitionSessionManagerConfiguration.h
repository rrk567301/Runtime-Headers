@interface PKRecognitionSessionManagerConfiguration : NSObject

@property (nonatomic) char sessionCaching;
@property (nonatomic) char smartSelectionQuery;

+ (id)defaultConfiguration;
+ (id)backgroundIndexingConfiguration;
+ (id)interactiveCanvasConfiguration;

- (id)init;

@end
