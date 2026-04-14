@class NSString;

@interface CKContainerID : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long specialContainerType;
@property (nonatomic) BOOL isTestContainer;
@property (nonatomic) BOOL isAppleInternal;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long environment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 environment:(long long)a1;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)representativeDataclass;
- (id)sqliteRepresentation;

@end
