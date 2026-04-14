@class NSString, NSArray;

@interface BMMediaRouteOutputDevice : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *outputDeviceID;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subType;
@property (readonly, nonatomic) int clusterType;
@property (readonly, nonatomic) NSArray *flattenedClusterLeafMembers;
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
- (id)_flattenedClusterLeafMembersJSONArray;
- (id)initWithOutputDeviceID:(id)a0 type:(int)a1 subType:(int)a2 clusterType:(int)a3 flattenedClusterLeafMembers:(id)a4;

@end
