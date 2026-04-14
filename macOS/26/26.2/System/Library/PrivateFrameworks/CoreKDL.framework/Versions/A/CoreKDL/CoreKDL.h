@class NSObject;
@protocol KDLTransport;

@interface CoreKDL : NSObject {
    NSObject<KDLTransport> *_transport;
    int _notifyToken;
}

@property (readonly) long long currentKDLVersion;
@property (copy) id /* block */ notificationCallback;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)updateKDLFromPath:(id)a0 error:(id *)a1;
- (BOOL)updateKDLToLatestVersionWithError:(id *)a0;
- (id)listOffendingKextsForService:(long long)a0 error:(id *)a1;
- (BOOL)queryCurrentState:(unsigned long long *)a0 forService:(long long)a1 error:(id *)a2;

@end
