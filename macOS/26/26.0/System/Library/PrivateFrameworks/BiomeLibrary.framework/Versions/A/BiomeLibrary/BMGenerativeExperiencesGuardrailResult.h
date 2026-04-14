@class NSUUID, NSString, NSData;

@interface BMGenerativeExperiencesGuardrailResult : BMEventBase <BMStoreData> {
    NSData *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL markedUnsafe;
@property (nonatomic) BOOL hasMarkedUnsafe;
@property (readonly, nonatomic) NSString *useCaseIdentifier;
@property (readonly, nonatomic) int instanceType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)protoFields;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)validKeyPaths;

- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 markedUnsafe:(id)a1 useCaseIdentifier:(id)a2 instanceType:(int)a3;

@end
