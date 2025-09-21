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

- (void)clearCache;
- (const char **)contentXattrNamesEnd;
- (unsigned int)structuralXattrNamesCount;
- (unsigned int)contentXattrNamesCount;
- (const char **)xattrNamesEnd;
- (const char **)structuralXattrNamesBegin;
- (const char *)xattrNamesListBegin;
- (unsigned int)xattrNamesCount;
- (const char **)structuralXattrNamesEnd;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (const char *)xattrNamesListEnd;
- (const char **)xattrNamesBegin;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (const char **)contentXattrNamesBegin;
- (void).cxx_destruct;

@end
