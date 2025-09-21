@class NSString, NSDictionary, NSData, RFTextProperty, NSNumber, RFVisualProperty;

@interface RFTableCell : NSObject <RFTableCell, NSSecureCoding, NSCopying> {
    struct { unsigned char text : 1; unsigned char visual : 1; unsigned char horizontal_alignment : 1; unsigned char applySmallCaps : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) RFTextProperty *text;
@property (retain, nonatomic) RFVisualProperty *visual;
@property (copy, nonatomic) NSNumber *column_span;
@property (nonatomic) int horizontal_alignment;
@property (nonatomic) char applySmallCaps;
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
- (char)hasText;
- (id)initWithProtobuf:(id)a0;
- (char)hasApplySmallCaps;
- (char)hasHorizontal_alignment;
- (char)hasVisual;

@end
