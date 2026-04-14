@class LASecureIOServer;

@interface LASecureIOLocal : LASecureIOCommunication {
    LASecureIOServer *_server;
}

- (void).cxx_destruct;
- (id)init;
- (long long)executeCommand:(unsigned int)a0 withData:(id)a1 andResponse:(id *)a2;

@end
