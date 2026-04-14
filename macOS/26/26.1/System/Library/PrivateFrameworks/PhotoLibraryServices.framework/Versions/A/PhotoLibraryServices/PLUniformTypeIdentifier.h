@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)utiWithIdentifier:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)jpegUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;

- (BOOL)isPlayableVideo;
- (BOOL)isDynamic;
- (BOOL)isPrimaryImageFormat;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (BOOL)conformsToRawImage;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToData;
- (id)description;
- (BOOL)conformsToAudio;
- (BOOL)conformsToMovie;
- (BOOL)conformsToHEIF;
- (BOOL)isLosslessEncoding;
- (void).cxx_destruct;
- (BOOL)conformsToHEIC;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)preferredExtension;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToImage;

@end
