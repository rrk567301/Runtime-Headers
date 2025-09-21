@class NSString, NSDictionary, NSData;

@interface SFCardMetadata : NSObject <SFCardMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char isServerEntity : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isServerEntity;
@property (copy, nonatomic) NSString *queryToSearchAcrossAllDomains;
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
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasIsServerEntity;

@end
