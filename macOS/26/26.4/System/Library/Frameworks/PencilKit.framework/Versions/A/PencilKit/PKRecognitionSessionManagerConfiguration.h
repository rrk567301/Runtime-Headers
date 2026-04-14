@class NSUUID;

@interface PKRecognitionSessionManagerConfiguration : NSObject

@property (nonatomic) BOOL sessionCaching;
@property (nonatomic) BOOL smartSelectionQuery;
@property (retain, nonatomic) NSUUID *sessionCacheIdentifier;

+ (id)defaultConfiguration;
+ (id)backgroundIndexingConfiguration;
+ (id)interactiveCanvasConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
