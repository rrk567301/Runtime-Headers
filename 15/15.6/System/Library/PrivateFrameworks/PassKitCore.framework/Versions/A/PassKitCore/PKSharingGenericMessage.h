@class NSDictionary;

@interface PKSharingGenericMessage : PKSharingMessage

@property (readonly, nonatomic) NSDictionary *genericSharingDict;
@property (readonly, nonatomic) NSDictionary *appleSharingDict;

+ (char)supportsSecureCoding;
+ (id)_contentForGenericSharingDict:(id)a0 appleSharingDict:(id)a1 format:(unsigned long long)a2;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToSharingGenericMessage:(id)a0;
- (void)addEmbeddedMessages:(id)a0;
- (char)configureWithContent:(id)a0;
- (id)embeddedMessageURLs;
- (id)initWithFormat:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3;
- (id)initWithFormat:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3 displayInformation:(id)a4;
- (id)initWithVertical:(unsigned long long)a0 type:(unsigned long long)a1 genericSharingDict:(id)a2 appleSharingDict:(id)a3;

@end
