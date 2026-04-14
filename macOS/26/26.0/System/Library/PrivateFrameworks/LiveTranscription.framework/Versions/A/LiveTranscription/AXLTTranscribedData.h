@class NSArray, NSString, NSDate, AXLTTranscription;

@interface AXLTTranscribedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXLTTranscription *transcription;
@property (retain, nonatomic) NSArray *nonUpdatingSegments;
@property (retain, nonatomic) NSString *transcribedText;
@property (nonatomic) long long requestType;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) long long assetState;
@property (nonatomic) long long downloadState;
@property (nonatomic, getter=isSilence) BOOL silence;
@property (readonly, nonatomic) long long downloadProgress;
@property (nonatomic) BOOL isV2;
@property (nonatomic) long long resultTypeV2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTranscribedText:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 assetState:(long long)a6 silence:(BOOL)a7 resultType:(long long)a8 isV2:(BOOL)a9;
- (id)initWithTranscribedText:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 assetState:(long long)a6 silence:(BOOL)a7;
- (id)initWithTranscribedText:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 assetState:(long long)a6 silence:(BOOL)a7 resultType:(long long)a8;
- (id)initWithTranscription:(id)a0 requestType:(long long)a1 timestamp:(id)a2 pid:(int)a3 appID:(id)a4 appName:(id)a5 assetState:(long long)a6 silence:(BOOL)a7;

@end
