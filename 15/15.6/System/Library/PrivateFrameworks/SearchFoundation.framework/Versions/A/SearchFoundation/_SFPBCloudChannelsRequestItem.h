@class NSString, NSData;

@interface _SFPBCloudChannelsRequestItem : PBCodable <_SFPBCloudChannelsRequestItem, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSString *pushTopic;
@property (copy, nonatomic) NSString *subscribedEntityIdentifier;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;

@end
