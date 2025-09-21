@class NSString;
@protocol LACDTOFeatureRequirements;

@interface LACDTOMutableFeatureState : NSObject <LACDTOFeatureState>

@property (nonatomic) char isSupported;
@property (nonatomic) char isAvailable;
@property (nonatomic) char isEnabled;
@property (nonatomic) char isStrictModeEnabled;
@property (retain, nonatomic) id<LACDTOFeatureRequirements> requirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
