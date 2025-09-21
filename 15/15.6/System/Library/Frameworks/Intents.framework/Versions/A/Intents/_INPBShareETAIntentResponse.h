@class NSArray, NSString;

@interface _INPBShareETAIntentResponse : PBCodable <_INPBShareETAIntentResponse, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _mediums;
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int *mediums;
@property (readonly, nonatomic) unsigned long long mediumsCount;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecipient:(id)a0;
- (void)clearRecipients;
- (int)StringAsMediums:(id)a0;
- (void)addMedium:(int)a0;
- (void)clearMediums;
- (int)mediumAtIndex:(unsigned long long)a0;
- (id)mediumsAsString:(int)a0;
- (id)recipientAtIndex:(unsigned long long)a0;
- (void)setMediums:(int *)a0 count:(unsigned long long)a1;

@end
