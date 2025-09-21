@class NSString, NSArray, NSData, NSURL, NSMutableArray;

@interface CESRFidesASRRecord : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *pluginId;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *task;
@property (readonly, nonatomic) unsigned long long samplingRate;
@property (readonly, nonatomic) char farField;
@property (readonly, copy, nonatomic) NSArray *context;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, copy, nonatomic) NSMutableArray *audioPackets;
@property (readonly, nonatomic) char hasRecognizedAnything;
@property (readonly, copy, nonatomic) NSString *interactionIdentifier;
@property (readonly, copy, nonatomic) NSString *asrSelfComponentIdentifier;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSString *correctedTextV2;
@property (copy, nonatomic) NSArray *recognizedText;
@property (copy, nonatomic) NSArray *recognizedNbest;
@property (copy, nonatomic) NSString *postITNRecognizedText;
@property (nonatomic) char personalizedLMUsed;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *date;
@property (readonly, nonatomic) double timestamp;
@property (copy, nonatomic) NSArray *alternatives;
@property (retain, nonatomic) NSData *profile;
@property (copy, nonatomic) NSURL *originalAudioFileURL;

+ (id)recordFromData:(id)a0;
+ (void)deleteAllRecordsForPlugin:(id)a0 completion:(id /* block */)a1;
+ (id)recordWithLanguage:(id)a0 task:(id)a1 context:(id)a2 narrowband:(char)a3 farField:(char)a4 interactionIdentifier:(id)a5 asrSelfComponentIdentifier:(id)a6 pluginId:(id)a7;
+ (id)recordWithLanguage:(id)a0 task:(id)a1 context:(id)a2 narrowband:(char)a3 farField:(char)a4 interactionIdentifier:(id)a5 asrSelfComponentIdentifier:(id)a6 pluginId:(id)a7 frequency:(unsigned long long)a8;

- (void).cxx_destruct;
- (char)hasData;
- (void)save;
- (void)addAudioPacket:(id)a0;
- (void)markRecognition;
- (id)concatenatedAudioPackets;
- (void)saveOneRecordPerDay;

@end
