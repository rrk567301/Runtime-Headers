@class NSString;

@interface BMFindMyLocationChange : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *idsHandle;
@property (readonly, nonatomic) int stateChange;
@property (readonly, nonatomic) int activityState;
@property (readonly, nonatomic) NSString *name;
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
- (id)initWithIdsHandle:(id)a0 stateChange:(int)a1 activityState:(int)a2 latitude:(id)a3 longitude:(id)a4 name:(id)a5;
- (id)initWithIdsHandle:(id)a0 stateChange:(int)a1 activityState:(int)a2 name:(id)a3;

@end
