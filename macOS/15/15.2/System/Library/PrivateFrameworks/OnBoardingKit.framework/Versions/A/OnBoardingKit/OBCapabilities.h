@class NSNumber, NSString;

@interface OBCapabilities : NSObject

@property (retain, nonatomic) NSNumber *overrideEligibleForChlorine;
@property (retain, nonatomic) NSString *overrideAdditionalDisplayLanguage;
@property (nonatomic) BOOL preventURLDataDetection;
@property (nonatomic) BOOL preventOpeningSafari;

+ (id)sharedCapabilities;

- (void).cxx_destruct;
- (BOOL)isWAPI;
- (id)_potentialAdditionalDisplayLanguage;
- (id)additionalDisplayLanguageForDisplayLanguage:(id)a0;
- (BOOL)deviceSupportsGenerativeModels;
- (BOOL)eligibleForChlorine;

@end
