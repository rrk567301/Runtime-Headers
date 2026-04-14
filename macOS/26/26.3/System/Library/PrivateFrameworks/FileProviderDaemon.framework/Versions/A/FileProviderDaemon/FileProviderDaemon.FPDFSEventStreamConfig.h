@class NSUUID;

@interface FileProviderDaemon.FPDFSEventStreamConfig : NSObject {
    void /* unknown type, empty encoding */ previousStreamUUID;
}

@property (nonatomic) BOOL historyPurged;
@property (nonatomic, copy) NSUUID *previousStreamUUID;
@property (nonatomic) unsigned long long lastPurgedEventID;

- (id)init;
- (void).cxx_destruct;

@end
