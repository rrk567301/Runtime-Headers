@class NSString, NSDictionary, NSData, RFSimpleItemRichCardSection;

@interface RFSummaryItemExpandableContent : NSObject <RFSummaryItemExpandableContent, NSSecureCoding, NSCopying> {
    struct { unsigned char simple_item_rich_card_section : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFSimpleItemRichCardSection *simple_item_rich_card_section;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasSimple_item_rich_card_section;

@end
