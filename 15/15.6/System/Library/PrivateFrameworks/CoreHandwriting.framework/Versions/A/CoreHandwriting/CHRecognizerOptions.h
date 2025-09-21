@interface CHRecognizerOptions : NSObject

@property (nonatomic) char enableCachingIfAvailable;
@property (nonatomic) char enableGen2ModelIfAvailable;
@property (nonatomic) char enableGen2CharacterLMIfAvailable;

- (id)init;

@end
