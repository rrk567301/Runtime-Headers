@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)jpegUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;

- (BOOL)isDynamic;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToRawImage;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToAudio;
- (BOOL)conformsToHEIC;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToHEIF;
- (BOOL)conformsToJPEG;
- (void).cxx_destruct;
- (BOOL)conformsToData;
- (unsigned long long)hash;
- (id)preferredExtension;
- (id)description;
- (id)initWithIdentifier:(id)a0 conformanceHint:(short)a1;
- (BOOL)conformsToMovie;
- (BOOL)conformsToImage;

@end
