@class NSString;

@interface BMSemanticLocationEvent : BMEventBase <BMEventBinaryStepping, BMStoreData, BMProtoBufWrapper>

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) unsigned long long userSpecificPlaceType;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) NSString *loiIdentifier;
@property (nonatomic, getter=isStarting) char starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)initWithUserSpecificPlaceType:(unsigned long long)a0 placeType:(unsigned long long)a1 loiIdentifier:(id)a2 starting:(char)a3;
- (id)initWithProto:(id)a0;
- (id)initWithUserSpecificPlaceType:(unsigned long long)a0 placeType:(unsigned long long)a1 starting:(char)a2;

@end
