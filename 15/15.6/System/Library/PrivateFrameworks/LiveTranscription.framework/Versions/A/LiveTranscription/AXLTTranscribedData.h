@class NSArray, NSString, NSDate, AXLTTranscription;

@interface AXLTTranscribedData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) AXLTTranscription *transcription;
@property (retain, nonatomic) NSArray *nonUpdatingSegments;
@property (retain, nonatomic) NSString *transcribedText;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) long long downloadProgress;
@property (nonatomic, getter=isSilence) char silence;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTranscribedText:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 downloadProgress:(long long)a6 silence:(char)a7;
- (id)initWithTranscription:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 downloadProgress:(long long)a6 silence:(char)a7;

@end
