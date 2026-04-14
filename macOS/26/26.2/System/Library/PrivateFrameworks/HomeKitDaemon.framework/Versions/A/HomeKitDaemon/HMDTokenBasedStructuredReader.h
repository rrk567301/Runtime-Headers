@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (id)readData;
- (id)error;
- (unsigned long long)beginArray;
- (void).cxx_destruct;
- (unsigned long long)beginDictionary;
- (void)failWithError:(id)a0;
- (void)endArray;
- (void)endDictionary;
- (id)readString;
- (long long)tokenType;
- (id)readDate;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (BOOL)readBoolean;
- (id)readDictionaryKey;
- (void)readNull;
- (id)readNumber;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (id)readUUID;
- (void)skipToken;

@end
