@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (id)readString;
- (unsigned long long)beginDictionary;
- (id)error;
- (unsigned long long)beginArray;
- (void)endArray;
- (void).cxx_destruct;
- (id)readData;
- (void)endDictionary;
- (void)failWithError:(id)a0;
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
