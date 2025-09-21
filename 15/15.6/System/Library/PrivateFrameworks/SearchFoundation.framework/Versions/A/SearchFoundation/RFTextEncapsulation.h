@class NSDictionary, NSData, NSString;

@interface RFTextEncapsulation : NSObject <RFTextEncapsulation, NSSecureCoding, NSCopying> {
    struct { unsigned char style : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int style;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasStyle;
- (id)initWithProtobuf:(id)a0;

@end
