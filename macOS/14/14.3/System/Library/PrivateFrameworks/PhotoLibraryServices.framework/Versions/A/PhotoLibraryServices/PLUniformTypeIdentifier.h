@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)utiWithIdentifier:(id)a0;
+ (id)videoComplementUniformTypeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamic;
- (BOOL)isPrimaryImageFormat;
- (BOOL)conformsToAudio;
- (BOOL)conformsToMovie;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToImage;
- (BOOL)conformsToData;
- (BOOL)conformsToJPEG;
- (BOOL)conformsToRawImage;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)isLosslessEncoding;
- (id)preferredExtension;

@end
