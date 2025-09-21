@class SISchemaTopLevelUnionType, NSUUID, SILogicalTimestamp, SIOrderedEventInternal;

@interface SIOrderedEvent : NSObject {
    SIOrderedEventInternal *_underlying;
    SILogicalTimestamp *_underlyingTimestamp;
}

@property (readonly, nonatomic) SILogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *topLevelUnionType;
@property (readonly, nonatomic) NSUUID *messageUUID;

+ (id)deserializeFromData:(id)a0;

- (id)initWithData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)data;
- (id)initWithInternalType:(id)a0;
- (id)initWithTimestamp:(id)a0 messageUUID:(id)a1 topLevelUnionType:(id)a2;

@end
