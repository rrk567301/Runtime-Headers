@class NSURL, CKDSStorageFile, NSData;

@interface CKDSStorage : NSObject <NSCopying>

@property (readonly, nonatomic) CKDSStorageFile *file;
@property (nonatomic) char writable;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dataWithError:(id *)a0;
- (id)initForWriting:(char)a0 withFile:(id)a1 orData:(id)a2;
- (char)size:(unsigned long long *)a0 error:(id *)a1;

@end
