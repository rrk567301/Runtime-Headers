@class NSString;

@interface IMNicknameAvatarImage : IMNicknameAvatar <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasImage;
@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *imageFilePath;
@property (readonly, nonatomic) char imageExists;
@property (readonly, nonatomic) char contentIsSensitive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)imageData;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (char)_writeImageData:(id)a0 path:(id)a1 error:(id *)a2;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(char)a3;
- (id)initWithImageName:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(char)a3 error:(id *)a4;
- (id)initWithImageName:(id)a0 imageFilePath:(id)a1 contentIsSensitive:(char)a2;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0;
- (id)initWithPublicDictionaryMetadataRepresentation:(id)a0 imageData:(id)a1 imageFilePath:(id)a2 contentIsSensitive:(char)a3 error:(id *)a4;
- (id)loadAndReturnImageData;
- (id)publicDictionaryMetadataRepresentation;
- (id)publicDictionaryRepresentation;

@end
