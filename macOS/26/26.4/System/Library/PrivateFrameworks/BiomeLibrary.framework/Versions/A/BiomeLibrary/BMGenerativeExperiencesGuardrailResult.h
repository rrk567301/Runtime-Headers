@class NSUUID, NSString, NSData;

@interface BMGenerativeExperiencesGuardrailResult : BMEventBase <BMStoreData> {
    NSData *_raw_identifier;
    NSData *_raw_userRequestID;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL markedUnsafe;
@property (nonatomic) BOOL hasMarkedUnsafe;
@property (readonly, nonatomic) NSString *useCaseIdentifier;
@property (readonly, nonatomic) int instanceType;
@property (readonly, nonatomic) NSUUID *userRequestID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)serialize;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)writeTo:(id)a0;
- (id)initWithIdentifier:(id)a0 markedUnsafe:(id)a1 useCaseIdentifier:(id)a2 instanceType:(int)a3;
- (id)initWithIdentifier:(id)a0 markedUnsafe:(id)a1 useCaseIdentifier:(id)a2 instanceType:(int)a3 userRequestID:(id)a4;

@end
