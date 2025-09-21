@interface GEORequestResponseMetadataFile : GEOAnalyticsDataFile

- (id)initForReadWithFileDescriptor:(int)a0;
- (id)initForReadWithFilePath:(id)a0;
- (id)initForWriteWithFilePath:(id)a0;
- (char)unsafe_readReqRespMetadataWithVisitorBlock:(id /* block */)a0;
- (char)writeRequestResponseMetadata:(id)a0;

@end
