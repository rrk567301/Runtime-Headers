@class NSString;

@interface CSFEligibility : NSObject

@property (nonatomic, readonly) BOOL regionEligible;
@property (nonatomic, readonly) BOOL languageEligible;
@property (nonatomic, readonly) BOOL siriLanguageEligible;
@property (nonatomic, readonly) BOOL locationEligible;
@property (nonatomic, readonly) BOOL deviceEligibile;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (BOOL)isEqual:(id)a0;

@end
