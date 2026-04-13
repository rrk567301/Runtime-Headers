@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithIdentifier:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isDynamic;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToRawImage;
- (BOOL)conformsToMovie;
- (BOOL)conformsToImage;
- (BOOL)isPrimaryImageFormat;
- (BOOL)isLosslessEncoding;
- (BOOL)conformsToAudio;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (id)preferredExtension;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)conformsToData;
- (BOOL)conformsToJPEG;

@end
