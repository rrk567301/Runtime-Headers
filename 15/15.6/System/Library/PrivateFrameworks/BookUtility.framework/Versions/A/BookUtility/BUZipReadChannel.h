@class BUZipEntry, BUZipArchive, NSString;
@protocol BUReadChannel;

@interface BUZipReadChannel : NSObject <BUReadChannel>

@property (retain, nonatomic) BUZipEntry *entry;
@property (retain, nonatomic) BUZipArchive *archive;
@property (nonatomic) char validateCRC;
@property (retain, nonatomic) id<BUReadChannel> archiveReadChannel;
@property (readonly, nonatomic) char isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (char)processData:(id)a0 CRC:(unsigned int *)a1 isDone:(char)a2 handler:(id /* block */)a3;
- (void)handleFailureWithHandler:(id /* block */)a0 error:(id)a1;
- (void)addBarrier:(id /* block */)a0;
- (id)initWithEntry:(id)a0 archive:(id)a1 validateCRC:(char)a2;
- (char)readFileHeaderFromData:(id)a0 headerLength:(unsigned long long *)a1;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)readWithFileHeaderLength:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)readWithHandler:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;

@end
