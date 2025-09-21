@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)jpegUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)utiWithIdentifier:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;

- (BOOL)isDynamic;
- (BOOL)conformsToHEIC;
- (BOOL)conformsToData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)isPrimaryImageFormat;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToMovie;
- (BOOL)conformsToAudio;
- (id)description;
- (BOOL)conformsToRawImage;
- (BOOL)conformsToImage;
- (BOOL)isPlayableVideo;
- (id)preferredExtension;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToHEIF;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
