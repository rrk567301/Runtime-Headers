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
- (void)_copyToInterimLocation;
- (BOOL)_isCloudKitSupportOriginated;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void *)_bytesPtrForStore;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1;
- (unsigned long long)length;
- (void)_moveToPermanentLocation;
- (unsigned long long)hash;
- (unsigned long long)_bytesLengthForStore;
- (id)description;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithStoreMetadata:(id)a0 directory:(id)a1 originalFileURL:(id)a2;

@end
