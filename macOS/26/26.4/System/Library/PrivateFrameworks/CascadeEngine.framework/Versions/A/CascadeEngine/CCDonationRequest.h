@class CCSet, NSNumber, NSString;
@protocol BMAccessAssertion;

@interface CCDonationRequest : NSObject {
    NSString *_description;
}

@property (readonly, nonatomic) long long requestId;
@property (readonly, nonatomic) CCSet *set;
@property (readonly, nonatomic) NSNumber *sourceVersion;
@property (readonly, nonatomic) NSString *sourceValidity;
@property (readonly, nonatomic) unsigned short options;
@property (readonly, nonatomic) id<BMAccessAssertion> accessAssertion;
@property (readonly, nonatomic) void /* function */ *attributionFunction;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)hasInlineFallback;
- (id)initWithSet:(id)a0 sourceVersion:(id)a1 sourceValidity:(id)a2 options:(unsigned short)a3 accessAssertion:(id)a4;
- (BOOL)isEqualToDonationRequest:(id)a0;
- (BOOL)isFullSet;
- (BOOL)isRemoteSync;
- (BOOL)noBusyWait;

@end
