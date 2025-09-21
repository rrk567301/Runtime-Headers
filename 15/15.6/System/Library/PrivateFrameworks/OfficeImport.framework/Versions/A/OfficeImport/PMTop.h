@interface PMTop : QLTop <OIProgressiveReaderDelegate>

+ (char)supportsProgressiveMapping;

- (char)isCancelled;
- (void)initializeClasses;
- (Class)mapperClassForIndexing:(char)a0;
- (void)readFile:(id)a0 orData:(id)a1 dataFileName:(id)a2 format:(unsigned long long)a3 archiver:(id)a4 forIndexing:(char)a5;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end
