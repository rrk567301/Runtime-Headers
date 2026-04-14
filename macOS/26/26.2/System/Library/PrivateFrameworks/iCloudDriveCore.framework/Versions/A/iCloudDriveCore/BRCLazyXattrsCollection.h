@class NSMutableData, NSMutableDictionary;

@interface BRCLazyXattrsCollection : NSObject {
    NSMutableData *_xattrNamesList;
    NSMutableData *_xattrNamesData;
    unsigned int _xattrCount;
    unsigned int _contentXattrCount;
    int _fd;
    long long _sizeLimit;
    long long _cacheSize;
    NSMutableDictionary *_cachedXattrs;
}

- (const char *)xattrNamesListEnd;
- (const char **)xattrNamesEnd;
- (const char *)xattrNamesListBegin;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)xattrNamesCount;
- (unsigned int)contentXattrNamesCount;
- (const char **)xattrNamesBegin;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (void)clearCache;
- (void).cxx_destruct;
- (const char **)contentXattrNamesBegin;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (unsigned int)structuralXattrNamesCount;
- (const char **)contentXattrNamesEnd;
- (const char **)structuralXattrNamesEnd;

@end
