@class NSString, NSDictionary, NSData, SFButtonItemAppearance;

@interface SFButtonItem : NSObject <SFButtonItem, NSSecureCoding, NSCopying> {
    struct { unsigned char uniqueId : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFButtonItemAppearance *buttonAppearance;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasUniqueId;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
