@class NSString, NSDictionary;

@interface CUNANPairingShowInfo : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *pinCode;
@property (readonly, copy, nonatomic) NSDictionary *textInfo;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSubscriberInfo:(id)a0 pinCode:(id)a1;

@end
