@class NSString;

@interface SiriTTSSynthesisResource : NSObject <NSSecureCoding> {
    void /* function */ language;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long version;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *assetKey;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;

@end
