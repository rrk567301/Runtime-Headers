@class NSString;

@interface CKContainerID : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long specialContainerType;
@property (nonatomic) char isTestContainer;
@property (nonatomic) char isAppleInternal;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)initWithContainerIdentifier:(id)a0 environment:(long long)a1;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)CKShortDescriptionRedact:(char)a0;
- (long long)c2ContainerType;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)a0 atIndex:(unsigned long long)a1;
- (id)equivalencyProperties;
- (id)initWithSqliteRepresentation:(id)a0;
- (id)representativeDataclass;
- (id)sqliteRepresentation;

@end
