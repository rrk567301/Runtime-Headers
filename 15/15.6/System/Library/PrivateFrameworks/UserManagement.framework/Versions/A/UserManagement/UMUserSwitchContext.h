@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {
    NSDictionary *_environmentsByServices;
}

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) char secondaryActionRequired;

+ (id)contextWithSetupData:(id)a0 shortLivedToken:(id)a1 secondaryActionRequired:(char)a2;

- (id)description;
- (void).cxx_destruct;

@end
