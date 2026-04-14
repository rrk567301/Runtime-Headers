@class NSUUID, NSString;

@interface SFSpeechAnalyzerOptionsLoggingInfo : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *asrID;
@property (readonly, copy, nonatomic) NSUUID *requestID;
@property (readonly, copy, nonatomic) NSString *dictationUIInteractionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsrID:(id)a0 requestID:(id)a1 dictationUIInteractionID:(id)a2;

@end
