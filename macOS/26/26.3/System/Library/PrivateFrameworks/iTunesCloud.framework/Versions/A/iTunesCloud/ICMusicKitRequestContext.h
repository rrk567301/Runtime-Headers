@class NSString;
@protocol ICDeveloperTokenProvider;

@interface ICMusicKitRequestContext : ICStoreRequestContext <NSSecureCoding> {
    NSString *_cachedDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long _storeRequestPersonalizationStyle;
@property (readonly, nonatomic) long long personalizationStyle;
@property (readonly, nonatomic) id<ICDeveloperTokenProvider> developerTokenProvider;
@property (readonly, nonatomic) long long personalizationMethod;

- (id)initWithBlock:(id /* block */)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (void)setPersonalizationStyle:(long long)a0;
- (id)description;
- (id)_description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDeveloperTokenProvider:(id)a0;
- (void)setPersonalizationMethod:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
