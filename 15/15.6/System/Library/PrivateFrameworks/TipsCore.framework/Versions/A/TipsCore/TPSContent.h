@class NSString, NAIdentity, NSArray, TPSAssets;

@interface TPSContent : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>

@property (class, readonly) char supportsSecureCoding;
@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (nonatomic) char bodyContainsLink;
@property (nonatomic) long long labelStyle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleContent;
@property (copy, nonatomic) NSArray *bodyContent;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) TPSAssets *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 metadata:(id)a1;

@end
