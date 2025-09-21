@class NSURL, NSMutableDictionary;

@interface PLFileSystemPersistenceBatchItem : NSObject

@property (readonly, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSMutableDictionary *attributes;

- (void)setString:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setInt32:(int)a0 forKey:(id)a1;
- (void)setUUIDString:(id)a0 forKey:(id)a1;
- (void)persist;
- (id)description;
- (void)setUInt16:(unsigned short)a0 forKey:(id)a1;
- (void)setUInt64:(unsigned long long)a0 forKey:(id)a1;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;

@end
