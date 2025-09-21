@class SISchemaTopLevelUnionType, NSUUID, SILogicalTimestampInternal, SIComponentIdentifier;

@interface SIOrderedEventInternal : PBCodable <NSCopying> {
    void /* unknown type, empty encoding */ messageUUID;
    void /* unknown type, empty encoding */ testFingerprint;
}

@property (nonatomic, retain) SILogicalTimestampInternal *logicalTimestamp;
@property (nonatomic, retain) SISchemaTopLevelUnionType *tluEvent;
@property (nonatomic, copy) NSUUID *messageUUID;
@property (nonatomic, retain) SIComponentIdentifier *clusterId;
@property (nonatomic, copy) NSUUID *testFingerprint;

+ (id)deserializeFrom:(id)a0;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithLogicalTimestamp:(id)a0 messageUUID:(id)a1 tluEvent:(id)a2;
- (id)initWithLogicalTimestamp:(id)a0 tluEvent:(id)a1;

@end
