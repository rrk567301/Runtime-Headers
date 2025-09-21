@class NSString, _INPBDataString;

@interface _INPBWorkoutAssociatedItem : PBCodable <_INPBWorkoutAssociatedItem, NSSecureCoding, NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char itemLabel : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int contentRating;
@property (nonatomic) char hasContentRating;
@property (copy, nonatomic) NSString *itemID;
@property (readonly, nonatomic) char hasItemID;
@property (nonatomic) int itemLabel;
@property (nonatomic) char hasItemLabel;
@property (retain, nonatomic) _INPBDataString *itemName;
@property (readonly, nonatomic) char hasItemName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsContentRating:(id)a0;
- (int)StringAsItemLabel:(id)a0;
- (id)contentRatingAsString:(int)a0;
- (id)itemLabelAsString:(int)a0;

@end
