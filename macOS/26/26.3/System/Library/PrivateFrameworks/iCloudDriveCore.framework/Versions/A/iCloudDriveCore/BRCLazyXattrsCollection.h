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

- (const char **)contentXattrNamesEnd;
- (const char **)structuralXattrNamesBegin;
- (const char **)xattrNamesBegin;
- (unsigned int)xattrNamesCount;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (const char **)xattrNamesEnd;
- (const char *)xattrNamesListEnd;
- (void)clearCache;
- (unsigned int)structuralXattrNamesCount;
- (const char *)xattrNamesListBegin;
- (void).cxx_destruct;
- (const char **)contentXattrNamesBegin;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (unsigned int)contentXattrNamesCount;
- (const char **)structuralXattrNamesEnd;

@end
