@class NSString, NSArray, TPSGradient;

@interface TPSUserGuide : NSObject <NSSecureCoding, NSCopying> {
    void /* function */ identifier;
    void /* function */ text;
    void /* function */ symbol;
    void /* function */ gradientColorStrings;
    void /* function */ platform;
    void /* function */ referrer;
    void /* function */ version;
    void /* unknown type, empty encoding */ _topicIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSString *topicIdentifierKey;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) BOOL platformIndependent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) NSArray *gradientColorStrings;
@property (nonatomic, readonly) TPSGradient *gradient;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, copy) NSString *referrer;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *description;

+ (id)getUserGuideFromURL:(id)a0;
+ (id)privateURLWithBookIdentifier:(id)a0 topicIdentifier:(id)a1 version:(id)a2 referrer:(id)a3;
+ (id)urlWithBook:(id)a0 topic:(id)a1 anchor:(id)a2 version:(id)a3 referrer:(id)a4;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 version:(id)a1 text:(id)a2 symbol:(id)a3 platform:(id)a4 platformIndependent:(BOOL)a5 gradientColorStrings:(id)a6;

@end
