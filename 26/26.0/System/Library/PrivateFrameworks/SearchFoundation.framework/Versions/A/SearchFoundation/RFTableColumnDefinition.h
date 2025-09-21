@class RFTableSpacerColumnDefinition, NSString, NSDictionary, RFTableContentColumnDefinition, NSData;

@interface RFTableColumnDefinition : NSObject <RFTableColumnDefinition, NSSecureCoding, NSCopying> {
    struct { unsigned char spacer : 1; unsigned char content : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFTableSpacerColumnDefinition *spacer;
@property (retain, nonatomic) RFTableContentColumnDefinition *content;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasContent;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasSpacer;

@end
