@class NSString, NSDictionary, SFCommand, NSData, NSNumber;

@interface SFImageReferenceData : NSObject <SFImageReferenceData, NSSecureCoding, NSCopying> {
    struct { unsigned char is_prominent : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *image_url;
@property (retain, nonatomic) SFCommand *command;
@property (copy, nonatomic) NSString *attribution;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (nonatomic) BOOL is_prominent;
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
- (BOOL)hasIs_prominent;

@end
