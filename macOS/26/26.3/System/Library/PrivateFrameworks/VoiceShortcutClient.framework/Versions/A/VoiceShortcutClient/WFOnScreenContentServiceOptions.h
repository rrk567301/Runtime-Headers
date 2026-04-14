@class NSArray;

@interface WFOnScreenContentServiceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *supportedItemClasses;
@property (nonatomic) struct { unsigned int val[8]; } originatingProcessAuditToken;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSupportedItemClasses:(id)a0 originatingProcessAuditToken:(struct { unsigned int x0[8]; })a1;

@end
