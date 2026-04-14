@class NSString;

@interface BMSemanticLocationEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>

@property (readonly, nonatomic) unsigned long long userSpecificPlaceType;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) NSString *loiIdentifier;
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)initWithUserSpecificPlaceType:(unsigned long long)a0 placeType:(unsigned long long)a1 loiIdentifier:(id)a2 starting:(BOOL)a3;
- (id)encodeAsProto;
- (id)initWithProto:(id)a0;
- (id)initWithUserSpecificPlaceType:(unsigned long long)a0 placeType:(unsigned long long)a1 starting:(BOOL)a2;
- (id)proto;

@end
