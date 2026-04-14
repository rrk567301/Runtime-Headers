@interface CSEventMessage : NSObject {
    BOOL _isManaged;
    int _indexType;
    int _event;
    int _dev;
    unsigned long long _msg_id;
    unsigned long long _journalNumber;
    unsigned long long _journalIno;
    unsigned long long _tocIno;
    long long _toc_size;
    const char *_journalName;
    const char *_journalCookie;
}

- (void)dealloc;
- (id)initWithMessage:(id)a0;
- (id)description;

@end
