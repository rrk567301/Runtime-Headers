@class NSString;

@interface DACUnknownActivityPolicy : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *audioSessionCategory;
@property (readonly, copy, nonatomic) NSString *audioSessionMode;
@property (readonly, nonatomic) unsigned long long audioSessionOptions;
@property (readonly, nonatomic) unsigned long long audioSessionRouteSharingPolicy;

+ (id)audioPolicyWithOptions:(unsigned long long)a0 audioSessionCategory:(id)a1 audioSessionMode:(id)a2 audioSessionOptions:(unsigned long long)a3;
+ (id)audioPolicyWithOptions:(unsigned long long)a0 audioSessionCategory:(id)a1 audioSessionMode:(id)a2 audioSessionOptions:(unsigned long long)a3 audioSessionRouteSharingPolicy:(unsigned long long)a4;
+ (id)policyWithOptions:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
