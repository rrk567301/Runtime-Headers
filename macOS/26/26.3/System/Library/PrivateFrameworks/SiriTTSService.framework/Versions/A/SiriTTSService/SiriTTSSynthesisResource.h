@class NSString;

@interface SiriTTSSynthesisResource : NSObject <NSSecureCoding> {
    void /* function */ language;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long version;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *assetKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLanguage:(id)a0;

@end
