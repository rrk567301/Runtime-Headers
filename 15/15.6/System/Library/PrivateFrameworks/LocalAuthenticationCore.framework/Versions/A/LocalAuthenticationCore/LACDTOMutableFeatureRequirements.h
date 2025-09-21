@class NSString;

@interface LACDTOMutableFeatureRequirements : NSObject <LACDTOFeatureRequirements>

@property (nonatomic) char hasPasscodeSet;
@property (nonatomic) char hasBiometricEnrollments;
@property (nonatomic) char hasLocationServicesEnabled;
@property (nonatomic) char hasHSA2Account;
@property (readonly, nonatomic) char hasSEPRequirements;
@property (readonly, nonatomic) char hasAPRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (char)isEqual:(id)a0;
- (id)initWithRequirements:(id)a0;

@end
