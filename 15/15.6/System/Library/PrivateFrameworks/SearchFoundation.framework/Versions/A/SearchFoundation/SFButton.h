@class NSString, NSDictionary, NSData, SFImage;

@interface SFButton : NSObject <SFButton, NSSecureCoding, NSCopying> {
    struct { unsigned char isSelected : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SFImage *image;
@property (retain, nonatomic) SFImage *selectedImage;
@property (nonatomic) char isSelected;
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
- (char)hasIsSelected;

@end
