@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {
    NSDictionary *_environmentsByServices;
}

@property (copy, nonatomic) NSData *setupData;
@property (copy, nonatomic) NSString *shortLivedToken;
@property (nonatomic) BOOL secondaryActionRequired;

+ (id)contextWithSetupData:(id)a0 shortLivedToken:(id)a1 secondaryActionRequired:(BOOL)a2;

- (void).cxx_destruct;
- (id)description;

@end
