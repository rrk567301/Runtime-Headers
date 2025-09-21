@class NSString, NSArray, NSDate;

@interface BMUserFocusInferredMode : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) int origin;
@property (readonly, nonatomic) NSString *originBundleID;
@property (readonly, nonatomic) char isAutomationEnabled;
@property (nonatomic) char hasIsAutomationEnabled;
@property (readonly, nonatomic) char isStart;
@property (nonatomic) char hasIsStart;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *originAnchorType;
@property (readonly, nonatomic) unsigned long long uiLocation;
@property (nonatomic) char hasUiLocation;
@property (readonly, nonatomic) double confidenceScore;
@property (nonatomic) char hasConfidenceScore;
@property (readonly, nonatomic) NSArray *serializedTriggers;
@property (readonly, nonatomic) int modeType;
@property (readonly, nonatomic) char shouldSuggestTriggers;
@property (nonatomic) char hasShouldSuggestTriggers;
@property (readonly, nonatomic) NSString *userModeName;
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
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(id)a0 modeIdentifier:(id)a1 origin:(int)a2 originBundleID:(id)a3 isAutomationEnabled:(id)a4 isStart:(id)a5 uuid:(id)a6 originAnchorType:(id)a7 uiLocation:(id)a8 confidenceScore:(id)a9 serializedTriggers:(id)a10 modeType:(int)a11 shouldSuggestTriggers:(id)a12 userModeName:(id)a13;
- (id)_serializedTriggersJSONArray;

@end
