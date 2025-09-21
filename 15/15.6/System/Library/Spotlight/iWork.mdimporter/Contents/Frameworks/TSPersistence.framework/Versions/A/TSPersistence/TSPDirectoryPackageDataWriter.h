@class NSString, NSURL;

@interface TSPDirectoryPackageDataWriter : NSObject <TSPPackageDataWriter> {
    NSURL *_URL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (struct CGDataConsumer { } *)newCGDataConsumerAtRelativePath:(id)a0;
- (char)flushPendingWritesReturningError:(id *)a0;
- (id)targetDataURLForPath:(id)a0;
- (char)writeData:(id)a0 toRelativePath:(id)a1 allowEncryption:(char)a2 error:(id *)a3;

@end
