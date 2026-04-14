@class NSString, NSDictionary, NSData;

@interface SFHashDetail : NSObject <SFHashDetail, NSSecureCoding, NSCopying> {
    struct { unsigned char has_summary : 1; unsigned char has_ee : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *full_hash;
@property (nonatomic) BOOL has_summary;
@property (nonatomic) BOOL has_ee;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasHas_ee;
- (BOOL)hasHas_summary;

@end
