@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)plistUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)jpegUniformTypeIdentifier;

- (BOOL)isPlayableVideo;
- (BOOL)isPrimaryImageFormat;
- (id)description;
- (BOOL)conformsToAudio;
- (BOOL)conformsToHEIF;
- (BOOL)conformsToData;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)isDynamic;
- (BOOL)conformsToHEIC;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToImage;
- (void).cxx_destruct;
- (BOOL)conformsToJPEG;
- (id)preferredExtension;
- (BOOL)conformsToMovie;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToRawImage;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (unsigned long long)hash;

@end
