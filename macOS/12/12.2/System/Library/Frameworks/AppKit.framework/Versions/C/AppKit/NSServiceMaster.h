@class NSMutableDictionary;

@interface NSServiceMaster : NSObject <NSServiceMasterProto> {
    NSMutableDictionary *_localObjects;
    id _reserved;
    struct { unsigned char serviceVendingIsActive : 1; unsigned int reserved : 31; } _serviceFlags;
}

+ (id)sharedServiceMaster;
+ (id)copyServiceForAppIdentifier:(id)a0 messageName:(id)a1;
+ (id)copyServiceForUUID:(id)a0;
+ (id)internalRunService:(id)a0 pboard:(id)a1 flags:(unsigned long long)a2 cancelledHint:(const BOOL *)a3;

- (void)dealloc;
- (id)init;
- (id)serviceListener;
- (id)objectForServicePath:(id)a0;
- (void)registerObject:(id)a0 withServicePath:(id)a1;
- (void)unregisterObjectWithServicePath:(id)a0;
- (id)objectForServicePath:(id)a0 app:(id)a1 doLaunch:(BOOL)a2 limitDate:(id)a3 basePortName:(id)a4;
- (id)objectForServicePath:(id)a0 app:(id)a1 doLaunch:(BOOL)a2 limitDate:(id)a3;

@end
