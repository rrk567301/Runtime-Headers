@class NSString;

@interface BMContextualUnderstandingPhysicalSocialPerson : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *cnContactID;
@property (readonly, nonatomic) NSString *unknownPersonID;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;

- (id)initByReadFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)serialize;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 phoneNumber:(id)a1 emailAddress:(id)a2 cnContactID:(id)a3 unknownPersonID:(id)a4;

@end
