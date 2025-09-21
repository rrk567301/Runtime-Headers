@class NSSet;

@interface PKAccountCardAvailabilityInfo : NSObject

@property (readonly, nonatomic) unsigned long long accountState;
@property (readonly, nonatomic) unsigned long long accountType;
@property (readonly, nonatomic) NSSet *supportedFeatures;

- (void).cxx_destruct;
- (id)initWithAccountState:(unsigned long long)a0 accountType:(unsigned long long)a1 supportedFeatures:(id)a2;

@end
