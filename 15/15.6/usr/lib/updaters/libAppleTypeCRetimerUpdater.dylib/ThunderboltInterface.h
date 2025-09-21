@class NSObject;
@protocol OS_os_log;

@interface ThunderboltInterface : NSObject {
    struct IOCFPlugInInterfaceStruct **_pluginInterface;
    struct IOThunderboltLibInterfaceStruct **_deviceInterface;
    unsigned long long _configBuffer;
    NSObject<OS_os_log> *_log;
}

- (void)dealloc;
- (void).cxx_destruct;
- (char)configReadForRoute:(unsigned long long)a0 port:(unsigned int)a1 space:(unsigned int)a2 index:(unsigned int)a3 result:(unsigned int *)a4;
- (char)configWriteForRoute:(unsigned long long)a0 port:(unsigned int)a1 space:(unsigned int)a2 index:(unsigned int)a3 value:(unsigned int)a4;
- (char)createPluginInterfaceForService:(unsigned int)a0;
- (char)findCapabilityForRoute:(unsigned long long)a0 port:(unsigned int)a1 space:(unsigned int)a2 mask:(unsigned int)a3 value:(unsigned int)a4 offset:(unsigned int *)a5;
- (id)initWithRouterID:(unsigned char)a0;
- (char)initializeDeviceInterfaceForRouterID:(unsigned char)a0;
- (char)serviceMatchesRouterID:(unsigned int)a0 routerID:(unsigned char)a1;

@end
