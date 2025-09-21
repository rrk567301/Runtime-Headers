@class NSString, NSArray, NSData, NSDictionary, _MRLanguageOptionProtobuf;

@interface MRLanguageOption : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) _MRLanguageOptionProtobuf *protobuf;
@property (nonatomic) unsigned int type;
@property (nonatomic) char hasType;
@property (copy, nonatomic) NSString *languageTag;
@property (copy, nonatomic) NSArray *characteristics;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)automaticLanguageOptionWithType:(unsigned int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithType:(unsigned int)a0 languageTag:(id)a1 characteristics:(id)a2 displayName:(id)a3 identifier:(id)a4;
- (char)isAutomaticLanguageOptionWithType:(unsigned int)a0;

@end
