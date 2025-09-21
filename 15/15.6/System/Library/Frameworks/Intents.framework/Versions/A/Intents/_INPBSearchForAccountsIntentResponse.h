@class NSArray, NSString;

@interface _INPBSearchForAccountsIntentResponse : PBCodable <_INPBSearchForAccountsIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *accounts;
@property (readonly, nonatomic) unsigned long long accountsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)accountsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)accountsAtIndex:(unsigned long long)a0;
- (void)addAccounts:(id)a0;
- (void)clearAccounts;

@end
