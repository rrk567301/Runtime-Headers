@class NSURL, NSUUID, NSData;

@interface _NSDataFileBackedFuture : NSData <_NSFileBackedFuture, NSSecureCoding> {
    NSURL *_fileURL;
    NSURL *_originalFileURL;
    NSData *_realData;
    NSData *_bytes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

+ (Class)classForKeyedUnarchiver;

- (unsigned long long)_bytesLengthForStore;
- (void)dealloc;
- (Class)classForCoder;
- (const void *)bytes;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (id)initWithCoder:(id)a0;
- (void *)_bytesPtrForStore;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;
- (BOOL)_isCloudKitSupportOriginated;

@end
