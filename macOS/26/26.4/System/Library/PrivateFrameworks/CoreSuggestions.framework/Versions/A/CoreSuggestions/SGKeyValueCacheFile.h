@class NSString, NSData, NSMutableData;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSData *_data;
    int _fd;
    NSString *_path;
    NSString *_tmpDir;
    NSMutableData *_memStore;
    SGKeyValueCacheFile *_other;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)keyValueCacheForPath:(id)a0;
+ (id)encodedStringForFullName:(id)a0;
+ (id)pathToCache;
+ (void)clearCacheAtPath:(id)a0;
+ (id)fullNameForEncodedContact:(id)a0;

- (id)initWithFileDescriptor:(int)a0;
- (id)initWithPath:(id)a0;
- (id)valueForKey:(id)a0 found:(BOOL *)a1;
- (void)deleteValueByRecordIdSet:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (void)setValueIfNotPresentWithDict:(id)a0 fromRecordId:(id)a1;
- (id)initInMemory;
- (id)_map;
- (void)encodeWithCoder:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValueIfNotPresent:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (void).cxx_destruct;
- (id)initTemporaryForOverwritingCache:(id)a0;
- (void)commitTemporaryFile;
- (id)initBlank;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)deleteValueByRecordId:(id)a0;
- (void)dealloc;

@end
