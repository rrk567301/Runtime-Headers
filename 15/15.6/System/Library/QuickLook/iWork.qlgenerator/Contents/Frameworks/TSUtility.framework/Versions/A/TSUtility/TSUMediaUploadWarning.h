@interface TSUMediaUploadWarning : TSUWarning

@property (readonly, nonatomic) char isFromUploader;

- (id)initWithKind:(long long)a0 message:(id)a1 isFromUploader:(char)a2;

@end
