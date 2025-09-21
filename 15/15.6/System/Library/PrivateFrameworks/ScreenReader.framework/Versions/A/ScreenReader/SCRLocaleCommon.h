@class NSArray, NSString;

@interface SCRLocaleCommon : NSObject <SCRLocaleInfoProviding>

@property (readonly, nonatomic) unsigned long long characterDirection;
@property (readonly, nonatomic) char isLocaleCharacterDirectionRightToLeft;
@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) NSString *preferredLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isLocaleCharacterDirectionRightToLeft;

@end
