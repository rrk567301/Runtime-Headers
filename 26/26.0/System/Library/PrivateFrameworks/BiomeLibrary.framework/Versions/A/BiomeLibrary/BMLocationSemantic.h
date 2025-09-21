@class NSUUID, NSString;

@interface BMLocationSemantic : BMEventBase <BMStoreData> {
    NSString *_raw_loiIdentifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) BOOL starting;
@property (nonatomic) BOOL hasStarting;
@property (readonly, nonatomic) int userSpecificPlaceType;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) NSUUID *loiIdentifier;
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
- (id)initWithStarting:(id)a0 userSpecificPlaceType:(int)a1 placeType:(int)a2 loiIdentifier:(id)a3;
- (id)initWithStarting:(id)a0 userSpecificPlaceType:(int)a1 placeType:(int)a2;

@end
