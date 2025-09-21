@class NSString, NSDictionary, NSData, NSNumber;

@interface RFTableContentColumnDefinition : NSObject <RFTableContentColumnDefinition, NSSecureCoding, NSCopying> {
    struct { unsigned char horizontal_alignment : 1; unsigned char disable_truncation : 1; unsigned char should_drop_in_flow_layout : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSNumber *size_percent;
@property (nonatomic) int horizontal_alignment;
@property (copy, nonatomic) NSNumber *drop_order;
@property (copy, nonatomic) NSNumber *equal_size_column_group;
@property (nonatomic) char disable_truncation;
@property (nonatomic) char should_drop_in_flow_layout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (char)hasDisable_truncation;
- (char)hasHorizontal_alignment;
- (char)hasShould_drop_in_flow_layout;

@end
