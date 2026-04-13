@class NSError;

@interface BAGResourceUpdateContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) NSError *error;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithLoadState:(unsigned long long)a0 error:(id)a1;

@end
