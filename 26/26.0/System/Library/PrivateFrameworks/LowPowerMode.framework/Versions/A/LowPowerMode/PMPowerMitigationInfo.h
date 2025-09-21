@class NSString;

@interface PMPowerMitigationInfo : NSObject

@property (readonly, nonatomic) long long mitigationLevel;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)initWithMitigationLevel:(long long)a0;
- (id)initWithMitigationLevel:(long long)a0 clientIdentifier:(id)a1;

@end
