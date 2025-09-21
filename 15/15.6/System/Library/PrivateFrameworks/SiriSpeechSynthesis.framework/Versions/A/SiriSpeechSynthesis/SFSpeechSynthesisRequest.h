@class NSString, ProsodyTransferData, SFSpeechSynthesisVoice;

@interface SFSpeechSynthesisRequest : NSObject

@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *voiceName;
@property (copy, nonatomic) NSString *clientBundleIdentifier;
@property (copy, nonatomic) NSString *requestIdentifer;
@property (weak, nonatomic) SFSpeechSynthesisVoice *voice;
@property (nonatomic) char useCache;
@property (nonatomic) char returnFrontEndFeature;
@property (nonatomic) long long phoneSetType;
@property (retain, nonatomic) ProsodyTransferData *prosodyTransferData;
@property (retain, nonatomic) NSString *devServiceType;
@property (nonatomic) long long type;
@property (nonatomic) char isPrivate;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long solutionType;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
