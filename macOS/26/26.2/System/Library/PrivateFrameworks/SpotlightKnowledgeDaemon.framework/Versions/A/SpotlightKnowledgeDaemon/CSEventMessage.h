@interface CSEventMessage : NSObject {
    BOOL _isManaged;
    unsigned int _indexType;
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

- (id)initWithMessage:(id)a0;
- (id)description;
- (void)dealloc;

@end
