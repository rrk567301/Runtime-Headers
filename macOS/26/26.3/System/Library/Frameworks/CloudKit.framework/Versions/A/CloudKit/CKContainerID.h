@class NSString;

@interface CKContainerID : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long specialContainerType;
@property (nonatomic) BOOL isTestContainer;
@property (nonatomic) BOOL isAppleInternal;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)CKShortDescriptionRedact:(BOOL)a0;
- (id)ckShortDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 environment:(long long)a1;
- (id)sqliteRepresentation;
- (id)equivalencyProperties;
- (id)initWithSqliteRepresentation:(id)a0;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)representativeDataclass;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)c2ContainerType;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
