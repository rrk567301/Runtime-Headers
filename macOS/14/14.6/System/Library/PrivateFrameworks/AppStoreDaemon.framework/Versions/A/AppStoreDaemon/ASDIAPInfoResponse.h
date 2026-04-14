@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *iaps;


- (id)init;
- (void).cxx_destruct;
- (id)initWithIAPs:(id)a0;

@end
