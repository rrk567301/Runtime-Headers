@class NSString;

@interface DEPDeviceUploadUser : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *dsid;
@property (readonly, nonatomic) NSString *name;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApproverDict:(id)a0;
- (id)initWithDsid:(id)a0 name:(id)a1;

@end
