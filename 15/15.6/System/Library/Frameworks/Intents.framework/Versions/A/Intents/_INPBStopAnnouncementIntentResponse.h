@class NSArray, NSString;

@interface _INPBStopAnnouncementIntentResponse : PBCodable <_INPBStopAnnouncementIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *stoppedAnnouncementRecords;
@property (readonly, nonatomic) unsigned long long stoppedAnnouncementRecordsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stoppedAnnouncementRecordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearStoppedAnnouncementRecords;
- (void)addStoppedAnnouncementRecords:(id)a0;
- (id)stoppedAnnouncementRecordsAtIndex:(unsigned long long)a0;

@end
