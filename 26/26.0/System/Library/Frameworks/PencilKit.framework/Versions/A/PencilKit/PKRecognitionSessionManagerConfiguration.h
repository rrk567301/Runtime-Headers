@class NSUUID;

@interface PKRecognitionSessionManagerConfiguration : NSObject

@property (nonatomic) BOOL sessionCaching;
@property (nonatomic) BOOL smartSelectionQuery;
@property (retain, nonatomic) NSUUID *sessionCacheIdentifier;

+ (id)defaultConfiguration;
+ (id)backgroundIndexingConfiguration;
+ (id)interactiveCanvasConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
