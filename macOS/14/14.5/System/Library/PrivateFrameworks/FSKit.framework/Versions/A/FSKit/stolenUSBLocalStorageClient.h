@interface stolenUSBLocalStorageClient : LiveFSClient

+ (id)newManager;

- (id)addDisk:(id)a0;
- (id)loadVolumes:(id)a0 ofType:(id)a1 withError:(id *)a2;

@end
