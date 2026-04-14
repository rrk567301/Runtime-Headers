@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *iaps;


- (id)initWithError:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIAPs:(id)a0;
- (void).cxx_destruct;

@end
