@class NSString;

@interface BMAdPlatformsCandidate : BMEventBase <BMStoreData>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int displayOrder;
@property (nonatomic) BOOL hasDisplayOrder;
@property (readonly, nonatomic) int filterID;
@property (readonly, nonatomic) int filterReason;
@property (nonatomic) BOOL hasFilterReason;
@property (readonly, nonatomic) NSString *secondaryFilterReason;
@property (readonly, nonatomic) int placed;
@property (nonatomic) BOOL hasPlaced;
@property (readonly, nonatomic) BOOL wouldBeFiltered;
@property (nonatomic) BOOL hasWouldBeFiltered;
@property (readonly, nonatomic) int impression;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)protoFields;
+ (id)validKeyPaths;

- (id)serialize;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionary;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initWithSourceID:(id)a0 displayOrder:(id)a1 filterID:(int)a2 filterReason:(id)a3 secondaryFilterReason:(id)a4 placed:(id)a5 wouldBeFiltered:(id)a6 impression:(int)a7;

@end
