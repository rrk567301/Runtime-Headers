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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
