@class NSString;

@interface CSFEligibility : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ regionEligible;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ languageEligible;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ siriLanguageEligible;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ locationEligible;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ deviceEligibile;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;

@end
