@class NSString, NSArray;

@interface TPSUserGuide : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ symbol;
    void /* unknown type, empty encoding */ gradientColorStrings;
    void /* unknown type, empty encoding */ _topicIdentifier;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) NSString *deviceGuideIdentifier;

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ platformIndependent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *symbol;
@property (nonatomic, readonly) NSArray *gradientColorStrings;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ gradient;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *description;

+ (id)privateURLWithBookIdentifier:(id)a0 topicIdentifier:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 version:(id)a1 text:(id)a2 symbol:(id)a3 platformIndependent:(BOOL)a4 gradientColorStrings:(id)a5;

@end
