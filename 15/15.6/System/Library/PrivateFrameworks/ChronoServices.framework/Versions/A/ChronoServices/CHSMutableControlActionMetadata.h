@class NSString;

@interface CHSMutableControlActionMetadata : CHSControlActionMetadata

@property (copy, nonatomic) NSString *intentType;
@property (nonatomic) char isLauncher;
@property (nonatomic) char isCameraCapture;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIntentType:(id)a0;
- (void)setIsCameraCapture:(char)a0;
- (void)setIsLauncher:(char)a0;

@end
