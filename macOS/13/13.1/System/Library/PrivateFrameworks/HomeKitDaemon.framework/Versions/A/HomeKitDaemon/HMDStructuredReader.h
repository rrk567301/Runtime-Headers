@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) long long tokenType;

+ (id)extendedTypeReaderWithReader:(id)a0;
+ (id)readerFromOPACKData:(id)a0;
+ (id)readerFromObject:(id)a0;
+ (id)readerFromObjectWithExtendedTypes:(id)a0;

- (id)readString;
- (id)readData;
- (unsigned long long)beginArray;
- (void)endArray;
- (unsigned long long)beginDictionary;
- (void)endDictionary;
- (id)readLogicalValueAsObject;
- (id)readDictionaryKey;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readDate;
- (id)readUUID;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)skipToken;
- (void)skipLogicalValue;
- (void)copyLogicalValueToWriter:(id)a0;

@end
