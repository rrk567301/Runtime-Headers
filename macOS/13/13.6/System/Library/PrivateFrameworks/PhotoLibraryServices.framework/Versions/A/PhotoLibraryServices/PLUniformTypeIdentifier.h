@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)utiWithIdentifier:(id)a0;
+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)jpegUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;
+ (id)videoComplementUniformTypeIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDynamic;
- (BOOL)conformsToMovie;
- (BOOL)conformsToImage;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToRawImage;
- (BOOL)isPrimaryImageFormat;
- (BOOL)conformsToAudio;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToData;
- (BOOL)conformsToJPEG;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)isLosslessEncoding;
- (id)preferredExtension;

@end
