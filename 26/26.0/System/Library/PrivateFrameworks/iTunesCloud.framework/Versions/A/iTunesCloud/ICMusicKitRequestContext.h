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
- (void)setPersonalizationStyle:(long long)a0;
- (id)_description;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)setDeveloperTokenProvider:(id)a0;
- (void)setPersonalizationMethod:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithBlock:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
