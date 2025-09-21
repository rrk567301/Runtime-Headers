@class NSObject;
@protocol OS_os_log;

@interface PCONUserClient : NSObject {
    unsigned int _service;
    unsigned int _connection;
    NSObject<OS_os_log> *_log;
}

@property (readonly) unsigned int instanceID;

- (void)dealloc;
- (void).cxx_destruct;
- (char)disablePCON;
- (char)enablePCON;
- (char)getPCONStatus;
- (id)initWithInstanceID:(unsigned int)a0;

@end
