@interface IOFastPathServiceClient : IOFastPathClientBase {
    unsigned int service;
    unsigned int connection;
    struct IOCircularDataQueue { } *queue;
    int options;
}

+ (id)clientWithService:(unsigned int)a0;

- (int)open;
- (id)initWithService:(unsigned int)a0;
- (int)close;
- (void)dealloc;

@end
