@interface IOFastPathServiceClient : IOFastPathClientBase {
    unsigned int service;
    unsigned int connection;
    struct IOCircularDataQueue { } *queue;
    int options;
}

+ (id)clientWithService:(unsigned int)a0;

- (int)open;
- (int)close;
- (id)initWithService:(unsigned int)a0;
- (void)dealloc;

@end
