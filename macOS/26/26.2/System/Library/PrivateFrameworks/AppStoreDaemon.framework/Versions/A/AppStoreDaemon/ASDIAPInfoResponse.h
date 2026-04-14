@class NSDictionary;

@interface ASDIAPInfoResponse : ASDRequestResponse <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *iaps;


- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithIAPs:(id)a0;

@end
