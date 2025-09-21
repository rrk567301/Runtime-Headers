@interface WMTop : QLTop

- (void)initializeClasses;
- (Class)mapperClassForIndexing:(char)a0;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;

@end
