@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)jpegUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)quicktimeUniformTypeIdentifier;

- (BOOL)isPlayableVideo;
- (BOOL)conformsToHEIC;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToAudio;
- (BOOL)conformsToJPEG;
- (id)preferredExtension;
- (BOOL)conformsToRawImage;
- (void).cxx_destruct;
- (BOOL)conformsToMovie;
- (id)description;
- (BOOL)conformsToImage;
- (BOOL)isDynamic;
- (BOOL)isPrimaryImageFormat;
- (BOOL)conformsToHEIF;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToData;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;

@end
