@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) long long tokenType;

+ (id)extendedTypeReaderWithReader:(id)a0;
+ (id)readerFromOPACKData:(id)a0;
+ (id)readerFromObject:(id)a0;
+ (id)readerFromObjectWithExtendedTypes:(id)a0;

- (id)readString;
- (void)endDictionary;
- (id)readData;
- (void)endArray;
- (unsigned long long)beginDictionary;
- (unsigned long long)beginArray;
- (void)copyLogicalValueToWriter:(id)a0;
- (BOOL)readBoolean;
- (id)readDate;
- (id)readDictionaryKey;
- (id)readLogicalValueAsObject;
- (void)readNull;
- (id)readNumber;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (id)readUUID;
- (void)skipLogicalValue;
- (void)skipToken;

@end
