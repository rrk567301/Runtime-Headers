@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (void).cxx_destruct;
- (id)error;
- (void)failWithError:(id)a0;
- (id)readString;
- (id)readData;
- (unsigned long long)beginDictionary;
- (void)endDictionary;
- (unsigned long long)beginArray;
- (void)endArray;
- (long long)tokenType;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readDate;
- (id)readUUID;
- (id)readDictionaryKey;
- (void)skipToken;

@end
