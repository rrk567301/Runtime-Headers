@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (unsigned long long)beginArray;
- (unsigned long long)beginDictionary;
- (id)error;
- (id)readString;
- (id)readData;
- (void)failWithError:(id)a0;
- (void)endArray;
- (void).cxx_destruct;
- (void)endDictionary;
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
