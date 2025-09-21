@class NSString, _MRAudioRouteProtobuf, NSDictionary;

@interface MRContentItemMetadataAudioRoute : NSObject <NSCopying>

@property (readonly, nonatomic) _MRAudioRouteProtobuf *protobuf;
@property (nonatomic) char hasType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char hasSupportsSpatialization;
@property (nonatomic) char supportsSpatialization;
@property (nonatomic) char hasSpatializationEnabled;
@property (nonatomic, getter=isSpatializationEnabled) char spatializationEnabled;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;

@end
