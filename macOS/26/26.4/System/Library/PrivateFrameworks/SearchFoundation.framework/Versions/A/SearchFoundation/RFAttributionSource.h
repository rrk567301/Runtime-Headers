@class NSString, RFAttribution, NSDictionary, SFCardSection, NSData, RFVisualProperty;

@interface RFAttributionSource : NSObject <RFAttributionSource, NSSecureCoding, NSCopying> {
    struct { unsigned char attribution : 1; unsigned char card_section : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFAttribution *attribution;
@property (retain, nonatomic) SFCardSection *card_section;
@property (retain, nonatomic) RFVisualProperty *thumbnail;
@property (copy, nonatomic) NSString *text_1;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProtobuf:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasCard_section;
- (BOOL)hasAttribution;

@end
