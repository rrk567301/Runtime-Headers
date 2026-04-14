@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithIdentifier:(id)a0;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isDynamic;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToImage;
- (BOOL)conformsToMovie;
- (BOOL)conformsToRawImage;
- (BOOL)isPrimaryImageFormat;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToAudio;
- (BOOL)conformsToData;
- (BOOL)conformsToJPEG;
- (id)preferredExtension;
- (BOOL)isLosslessEncoding;

@end
