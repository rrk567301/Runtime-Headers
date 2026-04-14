@class CTLazuliCustomMetaData, CTLazuliFileThumbnailInformation, CTLazuliFileDispositionInformation;

@interface CTLazuliFileTransferDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliFileThumbnailInformation *thumbnail;
@property (retain, nonatomic) CTLazuliFileDispositionInformation *file;
@property (retain, nonatomic) CTLazuliCustomMetaData *metaData;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliFileTransferDescriptor:(id)a0;

@end
