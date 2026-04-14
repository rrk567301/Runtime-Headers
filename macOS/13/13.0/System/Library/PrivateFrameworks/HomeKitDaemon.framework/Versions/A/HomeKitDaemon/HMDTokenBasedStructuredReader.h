@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (id)error;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (id)readString;
- (id)readData;
- (unsigned long long)beginArray;
- (void)endArray;
- (unsigned long long)beginDictionary;
- (void)endDictionary;
- (long long)tokenType;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (id)readDictionaryKey;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readNumber;
- (id)readDate;
- (id)readUUID;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)skipToken;

@end
