@class NSDictionary, NSData, NSString;

@interface RFOptionalBool : NSObject <RFOptionalBool, NSSecureCoding, NSCopying> {
    struct { unsigned char value : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char value;
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
- (char)hasValue;
- (id)initWithProtobuf:(id)a0;

@end
