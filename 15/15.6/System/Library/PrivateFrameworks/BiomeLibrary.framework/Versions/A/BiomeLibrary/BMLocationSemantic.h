@class NSUUID, NSString;

@interface BMLocationSemantic : BMEventBase <BMStoreData> {
    NSString *_raw_loiIdentifier;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) int userSpecificPlaceType;
@property (readonly, nonatomic) int placeType;
@property (readonly, nonatomic) NSUUID *loiIdentifier;
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
- (id)initWithStarting:(id)a0 userSpecificPlaceType:(int)a1 placeType:(int)a2 loiIdentifier:(id)a3;
- (id)initWithStarting:(id)a0 userSpecificPlaceType:(int)a1 placeType:(int)a2;

@end
