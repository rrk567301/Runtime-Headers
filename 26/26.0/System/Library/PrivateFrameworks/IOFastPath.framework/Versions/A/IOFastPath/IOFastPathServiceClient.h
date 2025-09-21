@interface IOFastPathServiceClient : IOFastPathClientBase {
    unsigned int service;
    unsigned int connection;
    struct IOCircularDataQueue { } *queue;
    int options;
}

+ (id)clientWithService:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (void)dealloc;
- (int)open;
- (int)close;

@end
