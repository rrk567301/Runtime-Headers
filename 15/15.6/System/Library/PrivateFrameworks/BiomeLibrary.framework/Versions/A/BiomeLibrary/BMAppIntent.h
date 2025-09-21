@class NSString, NSData, NSDate;

@interface BMAppIntent : BMEventBase <BMIdentifiable, BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) NSString *intentClass;
@property (readonly, nonatomic) NSString *intentVerb;
@property (readonly, nonatomic) int intentType;
@property (readonly, nonatomic) int handlingStatus;
@property (readonly, nonatomic) NSData *interaction;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, nonatomic) char donatedBySiri;
@property (nonatomic) char hasDonatedBySiri;
@property (readonly, nonatomic) int interactionDirection;
@property (readonly, nonatomic) NSString *groupIdentifier;
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
- (id)initWithAbsoluteTimestamp:(id)a0 bundleID:(id)a1 sourceID:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(int)a5 handlingStatus:(int)a6 interaction:(id)a7 itemID:(id)a8 donatedBySiri:(id)a9 interactionDirection:(int)a10 groupIdentifier:(id)a11;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithAbsoluteTimestamp:(id)a0 bundleID:(id)a1 sourceID:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(int)a5 handlingStatus:(int)a6 interaction:(id)a7 itemID:(id)a8 donatedBySiri:(id)a9 interactionDirection:(int)a10;

@end
