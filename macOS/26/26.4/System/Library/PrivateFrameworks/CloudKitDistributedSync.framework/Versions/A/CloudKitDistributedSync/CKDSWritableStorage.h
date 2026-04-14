@class NSMutableData;

@interface CKDSWritableStorage : CKDSStorage

@property (readonly, nonatomic) NSMutableData *data;

- (id)initInMemory;
- (id)initWithFileURL:(id)a0;
- (id)initWithTemporaryFile:(id *)a0;
- (id)readableStorage;

@end
