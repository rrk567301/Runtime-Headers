@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (void)done;
- (id)nextObject;
- (id)error;
- (id)initWithAsset:(id)a0;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInputStream:(id)a0;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
