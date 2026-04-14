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

- (void).cxx_destruct;
- (void)clearCache;
- (const char *)xattrNamesListBegin;
- (const char *)xattrNamesListEnd;
- (const char **)xattrNamesBegin;
- (unsigned int)xattrNamesCount;
- (const char **)xattrNamesEnd;
- (const char **)structuralXattrNamesBegin;
- (const char **)structuralXattrNamesEnd;
- (unsigned int)structuralXattrNamesCount;
- (const char **)contentXattrNamesBegin;
- (const char **)contentXattrNamesEnd;
- (unsigned int)contentXattrNamesCount;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (id)getXattrValue:(id)a0 error:(id *)a1;

@end
