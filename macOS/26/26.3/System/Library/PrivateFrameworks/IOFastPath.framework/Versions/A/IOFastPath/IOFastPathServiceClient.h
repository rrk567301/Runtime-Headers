@interface IOFastPathServiceClient : IOFastPathClientBase {
    unsigned int service;
    unsigned int connection;
    struct IOCircularDataQueue { } *queue;
    int options;
}

+ (id)clientWithService:(unsigned int)a0;

- (int)close;
- (int)open;
- (void)dealloc;
- (id)initWithService:(unsigned int)a0;

@end
