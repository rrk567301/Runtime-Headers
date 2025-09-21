@interface GEONetworkEventFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)a0;
- (id)initForReadWithFilePath:(id)a0;
- (id)initForWriteWithFilePath:(id)a0;
- (char)unsafe_readNetworkEventDataWithVisitorBlock:(id /* block */)a0;
- (char)writeNetworkEventData:(id)a0;

@end
