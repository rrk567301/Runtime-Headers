@class NSString, NSDictionary, NSData;

@interface RFAppIconImage : NSObject <RFAppIconImage, NSSecureCoding, NSCopying> {
    struct { unsigned char image_style : 1; unsigned char fallback : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *application_bundle_identifier;
@property (nonatomic) int image_style;
@property (nonatomic) int fallback;
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
- (BOOL)hasFallback;
- (BOOL)hasImage_style;

@end
