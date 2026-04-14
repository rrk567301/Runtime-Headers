@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { long long type; id value; } _token;
}

- (id)readString;
- (void)failWithError:(id)a0;
- (void)endDictionary;
- (id)readData;
- (id)error;
- (void)endArray;
- (unsigned long long)beginDictionary;
- (unsigned long long)beginArray;
- (void).cxx_destruct;
- (long long)tokenType;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;
- (BOOL)readBoolean;
- (id)readDate;
- (id)readDictionaryKey;
- (void)readNull;
- (id)readNumber;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (id)readUUID;
- (void)skipToken;

@end
