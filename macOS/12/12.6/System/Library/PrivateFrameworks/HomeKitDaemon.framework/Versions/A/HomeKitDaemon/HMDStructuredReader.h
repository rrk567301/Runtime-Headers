@interface HMDStructuredReader : HMDStructuredDataStream

@property (readonly) long long tokenType;

+ (id)readerFromObjectWithExtendedTypes:(id)a0;
+ (id)extendedTypeReaderWithReader:(id)a0;
+ (id)readerFromObject:(id)a0;
+ (id)readerFromOPACKData:(id)a0;

- (id)readString;
- (id)readData;
- (unsigned long long)beginDictionary;
- (void)endDictionary;
- (unsigned long long)beginArray;
- (void)endArray;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)copyLogicalValueToWriter:(id)a0;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readDate;
- (id)readUUID;
- (id)readLogicalValueAsObject;
- (id)readDictionaryKey;
- (void)skipLogicalValue;
- (void)skipToken;

@end
