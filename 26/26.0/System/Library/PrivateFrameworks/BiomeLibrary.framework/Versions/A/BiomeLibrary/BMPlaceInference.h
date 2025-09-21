@class NSUUID, NSString, BMPlaceInferenceMapItem;

@interface BMPlaceInference : BMEventBase <BMStoreData> {
    NSString *_raw_identifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) int userSpecificPlaceType;
@property (readonly, nonatomic) int userSpecificPlaceTypeSource;
@property (readonly, nonatomic) BMPlaceInferenceMapItem *mapItem;
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
- (id)initWithIdentifier:(id)a0 placeType:(int)a1 userSpecificPlaceType:(int)a2 userSpecificPlaceTypeSource:(int)a3 mapItem:(id)a4;

@end
