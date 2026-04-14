@class RTCReporting, NSObject;
@protocol TVPMediaItem;

@interface TVPReportingSession : NSObject

@property (retain, nonatomic) NSObject<TVPMediaItem> *mediaItem;
@property (retain, nonatomic) RTCReporting *reporter;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithMediaItem:(id)a0;
- (void)reportDownloadFinishedWithResult:(long long)a0 error:(id)a1;
- (void)_sendEvent:(id)a0 withCategory:(unsigned short)a1 type:(unsigned short)a2 values:(id)a3;

@end
