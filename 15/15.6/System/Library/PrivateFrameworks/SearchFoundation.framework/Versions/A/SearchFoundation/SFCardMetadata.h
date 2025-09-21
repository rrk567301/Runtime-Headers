@class NSString, NSDictionary, NSData;

@interface SFCardMetadata : NSObject <SFCardMetadata, NSSecureCoding, NSCopying> {
    struct { unsigned char isServerEntity : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isServerEntity;
@property (copy, nonatomic) NSString *queryToSearchAcrossAllDomains;
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
- (char)hasIsServerEntity;

@end
