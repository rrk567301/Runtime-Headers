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

- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (id)description;
- (Class)classForCoder;
- (void)_copyToInterimLocation;
- (BOOL)_isCloudKitSupportOriginated;
- (id)initWithCoder:(id)a0;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)_bytesLengthForStore;
- (unsigned long long)hash;
- (void *)_bytesPtrForStore;
- (void)encodeWithCoder:(id)a0;
- (void)_moveToPermanentLocation;

@end
