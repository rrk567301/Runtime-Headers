@class NSError, PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
    NSError *_error;
}

@property (nonatomic) Class itemClass;

- (id)initWithAsset:(id)a0;
- (id)nextObject;
- (id)error;
- (id)init;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (id)initWithInputStream:(id)a0;
- (id)initWithDeviceID:(int)a0 fileID:(unsigned long long)a1;

@end
