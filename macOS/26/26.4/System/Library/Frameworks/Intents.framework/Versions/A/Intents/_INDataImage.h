@class NSData, NSUUID;

@interface _INDataImage : INImage {
    NSUUID *_sha256HashUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _hashLock;
}

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (id)_copyWithSubclass:(Class)a0;
- (id)_dictionaryRepresentation;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (id)initWithImageData:(id)a0;
- (id)_identifier;
- (BOOL)_requiresRetrieval;
- (id)_imageData;
- (void)_setImageData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_sha256HashUUID;
- (BOOL)_isEligibleForProxying;
- (id)initWithCoder:(id)a0;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;

@end
