@interface _CDPrivacyPolicy : NSObject

@property (readonly, nonatomic) char canPersistOnStorage;
@property (readonly, nonatomic) double temporalPrecision;

+ (id)sharedPrivacyPolicy;

- (id)description;
- (id)init;
- (id)initWithTemporalPrecision:(double)a0 canPersistOnStorage:(char)a1;

@end
