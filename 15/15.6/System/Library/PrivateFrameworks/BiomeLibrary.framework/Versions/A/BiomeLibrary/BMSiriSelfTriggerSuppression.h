@class NSString;

@interface BMSiriSelfTriggerSuppression : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned int numSelfTriggersDetectedDuringEvent;
@property (nonatomic) char hasNumSelfTriggersDetectedDuringEvent;
@property (readonly, nonatomic) double durationOfSelfTriggerEventInSec;
@property (nonatomic) char hasDurationOfSelfTriggerEventInSec;
@property (readonly, nonatomic) int audioSource;
@property (readonly, nonatomic) char isBluetoothSpeakerActive;
@property (nonatomic) char hasIsBluetoothSpeakerActive;
@property (readonly, nonatomic) char isBuiltInSpeakerActive;
@property (nonatomic) char hasIsBuiltInSpeakerActive;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithNumSelfTriggersDetectedDuringEvent:(id)a0 durationOfSelfTriggerEventInSec:(id)a1 audioSource:(int)a2 isBluetoothSpeakerActive:(id)a3 isBuiltInSpeakerActive:(id)a4;

@end
