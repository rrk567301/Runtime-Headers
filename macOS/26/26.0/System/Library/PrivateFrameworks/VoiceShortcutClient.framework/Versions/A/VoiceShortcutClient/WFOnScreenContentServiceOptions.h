@class NSArray;

@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedItemClasses;
@property (nonatomic) struct { unsigned int val[8]; } originatingProcessAuditToken;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSupportedItemClasses:(id)a0 originatingProcessAuditToken:(struct { unsigned int x0[8]; })a1;

@end
