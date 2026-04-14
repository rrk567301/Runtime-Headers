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
- (id)initWithCoder:(id)a0;
- (void *)_bytesPtrForStore;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (id)description;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (BOOL)_isCloudKitSupportOriginated;
- (void)_moveToPermanentLocation;
- (void)_copyToInterimLocation;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (void)dealloc;

@end
