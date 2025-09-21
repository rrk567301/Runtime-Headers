@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (char)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)videoComplementUniformTypeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isDynamic;
- (char)isLosslessEncoding;
- (char)isPrimaryImageFormat;
- (char)conformsToAudio;
- (char)conformsToMovie;
- (char)isEqualToUniformTypeIdentifier:(id)a0;
- (char)isPlayableVideo;
- (char)conformsToImage;
- (char)conformsToData;
- (char)conformsToHEIC;
- (char)conformsToHEIF;
- (char)conformsToJPEG;
- (char)conformsToRawImage;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (id)preferredExtension;

@end
