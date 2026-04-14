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
- (const char **)xattrNamesEnd;
- (const char *)xattrNamesListEnd;
- (const char **)contentXattrNamesBegin;
- (const char **)xattrNamesBegin;
- (const char *)xattrNamesListBegin;
- (void).cxx_destruct;
- (id)getXattrValue:(id)a0 error:(id *)a1;
- (const char **)structuralXattrNamesEnd;
- (const char **)contentXattrNamesEnd;
- (id)initWithFD:(int)a0 sizeLimit:(long long)a1 syncable:(BOOL)a2 error:(id *)a3;
- (const char **)structuralXattrNamesBegin;
- (unsigned int)structuralXattrNamesCount;
- (unsigned int)contentXattrNamesCount;
- (unsigned int)xattrNamesCount;

@end
