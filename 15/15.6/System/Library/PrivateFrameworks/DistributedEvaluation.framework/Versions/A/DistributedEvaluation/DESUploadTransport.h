@class NSURL;

@interface DESUploadTransport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char originRoute;
@property (readonly, nonatomic) char parsecRoute;
@property (readonly, nonatomic) char dediscoRoute;
@property (readonly, copy, nonatomic) NSURL *postBackBaseURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDediscoRoute:(char)a0 originRoute:(char)a1 parsecRoute:(char)a2 postBackBaseURL:(id)a3;
- (id)initWithPolicy:(id)a0 recipe:(id)a1;

@end
