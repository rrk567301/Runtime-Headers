@class NSArray, NSMutableArray;

@interface ATXUserNotificationDerivedData : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSCopying> {
    NSMutableArray *_internalScores;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=getPublicScores) NSArray *scores;

- (id)initFromJSON:(id)a0;
- (id)encodeAsProto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initFromModelScores:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToATXUserNotificationDerivedData:(id)a0;
- (id)init;
- (void)addScores:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (void)addScore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
