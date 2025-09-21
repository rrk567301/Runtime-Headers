@class NSString;

@interface SiriTTSSynthesisVoice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ language;
    void /* unknown type, empty encoding */ name;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) void /* unknown type, empty encoding */ footprint;
@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic) void /* unknown type, empty encoding */ gender;
@property (nonatomic) void /* unknown type, empty encoding */ version;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *assetKey;

+ (int)voiceEnumForName:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0 name:(id)a1;

@end
