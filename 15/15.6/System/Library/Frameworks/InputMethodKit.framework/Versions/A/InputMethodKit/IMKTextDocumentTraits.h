@interface IMKTextDocumentTraits : NSObject

@property (readonly, nonatomic) unsigned long long autoCapitalizationType;
@property (readonly, nonatomic, getter=isAutoPeriodEnabled) char autoPeriodEnabled;
@property (readonly, nonatomic, getter=isSecureTextEntry) char secureTextEntry;
@property (readonly, nonatomic, getter=shouldSuppressCandidates) char suppressCandidates;

- (id)description;
- (id)init;
- (id)initWithAutoCapitalizationType:(unsigned long long)a0 autoPeriodEnabled:(char)a1 secureTextEntry:(char)a2;
- (id)initWithAutoCapitalizationType:(unsigned long long)a0 autoPeriodEnabled:(char)a1 secureTextEntry:(char)a2 suppressCandidates:(char)a3;

@end
