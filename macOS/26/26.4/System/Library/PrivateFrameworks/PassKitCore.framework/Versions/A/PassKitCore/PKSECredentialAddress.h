@class NSString;

@interface PKSECredentialAddress : NSObject <NSCopying> {
    PKSECredentialAddress *_next;
    NSString *_identifier;
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long mostSpecificType;
@property (readonly, nonatomic) NSString *mostSpecificIdentifier;
@property (readonly, nonatomic) NSString *appletIdentifier;
@property (readonly, nonatomic) NSString *subcredentialIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)addressByAppendingType:(unsigned long long)a0 identifier:(id)a1;
- (void)appendType:(unsigned long long)a0 identifier:(id)a1;
- (id)firstIdentifierOfType:(unsigned long long)a0;

@end
