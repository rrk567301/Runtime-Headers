@interface CSEventListenerDeletion : NSObject {
    BOOL _isDict;
    BOOL _isManaged;
    int _fd;
    int _indexType;
    unsigned int _bundleHash;
    unsigned int _homePathHash;
    unsigned long long _offset;
    unsigned long long _size;
    unsigned long long _serialNumber;
    const char *_bundle;
    const char *_journalCookie;
    struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } _itemsObj;
}

- (unsigned int)getItemCount;
- (id)initWithSerialNumber:(unsigned long long)a0 bundle:(const char *)a1 journalCookie:(const char *)a2 itemsObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; })a3 indexType:(int)a4 bundleHash:(unsigned int)a5;
- (void)iterateIdentifiers:(id /* block */)a0;

@end
