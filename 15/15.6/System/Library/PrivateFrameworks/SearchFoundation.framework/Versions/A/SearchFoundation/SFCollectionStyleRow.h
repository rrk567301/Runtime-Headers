@class NSDictionary, NSData, NSString;

@interface SFCollectionStyleRow : SFCollectionStyle <SFCollectionStyleRow, NSSecureCoding, NSCopying> {
    struct { unsigned char drawPlattersIfNecessary : 1; unsigned char isInsetGrouped : 1; unsigned char rowStyle : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char drawPlattersIfNecessary;
@property (nonatomic) char isInsetGrouped;
@property (nonatomic) int rowStyle;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasDrawPlattersIfNecessary;
- (char)hasIsInsetGrouped;
- (char)hasRowStyle;

@end
