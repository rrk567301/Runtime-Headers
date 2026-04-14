@class NSConnection, NSDistantObject;

@interface NSDistantObjectTableEntry : NSObject {
    NSConnection *_conn;
    NSDistantObject *_proxy;
    id _localObject;
    unsigned int _wireID;
}

- (id)description;
- (void)dealloc;

@end
