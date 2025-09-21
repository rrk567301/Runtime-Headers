@class RFOptionalFloat, NSDictionary, RFRGBValue, NSData, NSString;

@interface RFColor : NSObject <RFColor, NSSecureCoding, NSCopying> {
    struct { unsigned char rgb_value : 1; unsigned char name : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RFRGBValue *rgb_value;
@property (nonatomic) int name;
@property (retain, nonatomic) RFOptionalFloat *alpha;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)hasName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasRgb_value;

@end
