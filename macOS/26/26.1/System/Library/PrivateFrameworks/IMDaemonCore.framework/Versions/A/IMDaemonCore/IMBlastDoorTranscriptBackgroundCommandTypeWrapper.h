@class IMBlastDoorBackgroundUpdateInfo, IMBlastDoorBackgroundRequestInfo;

@interface IMBlastDoorTranscriptBackgroundCommandTypeWrapper : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) IMBlastDoorBackgroundUpdateInfo *update;
@property (retain, nonatomic) IMBlastDoorBackgroundUpdateInfo *refresh;
@property (retain, nonatomic) IMBlastDoorBackgroundRequestInfo *request;
@property (retain, nonatomic) IMBlastDoorBackgroundUpdateInfo *requestResponse;

- (void).cxx_destruct;
- (id)initWith:(id)a0;

@end
