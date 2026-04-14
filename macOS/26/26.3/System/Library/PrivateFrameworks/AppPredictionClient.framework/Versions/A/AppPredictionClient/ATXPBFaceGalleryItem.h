@class NSString;

@interface ATXPBFaceGalleryItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDescriptorIdentifier;
@property (retain, nonatomic) NSString *descriptorIdentifier;
@property (readonly, nonatomic) BOOL hasExtensionBundleIdentifier;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic) BOOL hasContainerBundleIdentifier;
@property (retain, nonatomic) NSString *containerBundleIdentifier;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
