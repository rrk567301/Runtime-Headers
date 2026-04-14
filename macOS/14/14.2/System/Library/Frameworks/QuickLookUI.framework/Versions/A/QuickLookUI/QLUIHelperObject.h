@interface QLUIHelperObject : NSObject {
    unsigned int _port;
}

@property unsigned int port;
@property unsigned int serverPort;

+ (id)mapTable;
+ (id)objectForPort:(unsigned int)a0;

- (void)invalidate;

@end
