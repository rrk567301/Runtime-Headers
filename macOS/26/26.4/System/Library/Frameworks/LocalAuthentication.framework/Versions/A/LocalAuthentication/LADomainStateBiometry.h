@class NSData;

@interface LADomainStateBiometry : NSObject

@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) NSData *stateHash;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)description;

@end
