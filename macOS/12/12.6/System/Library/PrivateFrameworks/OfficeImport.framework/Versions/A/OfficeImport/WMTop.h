@interface WMTop : QLTop

- (void)initializeClasses;
- (Class)readerClassForBinaryDocuments;
- (Class)readerClassForXMLDocuments;
- (Class)stateClass;
- (Class)mapperClassForIndexing:(BOOL)a0;

@end
