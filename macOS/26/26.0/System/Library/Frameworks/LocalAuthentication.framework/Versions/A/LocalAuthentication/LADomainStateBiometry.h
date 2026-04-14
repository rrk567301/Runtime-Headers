@class NSData;

@interface LADomainStateBiometry : NSObject

@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) NSData *stateHash;

- (id)initWithResult:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
