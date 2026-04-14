@class NSUUID;

@interface FileProviderDaemon.FPDFSEventStreamConfig : NSObject {
    void /* unknown type, empty encoding */ previousStreamUUID;
}

@property (nonatomic) BOOL historyPurged;
@property (nonatomic, copy) NSUUID *previousStreamUUID;
@property (nonatomic) unsigned long long lastPurgedEventID;

- (void).cxx_destruct;
- (id)init;

@end
