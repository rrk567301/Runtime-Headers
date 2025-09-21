@class NSString;

@interface UNCContactRecord : NSObject <NSCopying>

@property (copy, nonatomic) NSString *handle;
@property (nonatomic) long long handleType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=isDisplayNameSuggested) char displayNameSuggested;
@property (copy, nonatomic) NSString *customIdentifier;
@property (copy, nonatomic) NSString *cnContactIdentifier;
@property (copy, nonatomic) NSString *cnContactFullname;
@property (nonatomic, getter=isCNContactIdentifierSuggested) char cnContactIdentifierSuggested;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
