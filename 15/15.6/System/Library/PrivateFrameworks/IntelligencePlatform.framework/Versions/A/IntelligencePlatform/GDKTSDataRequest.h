@class NSString, GDKTSQueryParams;

@interface GDKTSDataRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) GDKTSQueryParams *parameters;
@property (readonly, nonatomic) long long cadence;
@property (readonly, copy, nonatomic) NSString *requestID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)initWithParameters:(id)a0 cadence:(long long)a1;

@end
