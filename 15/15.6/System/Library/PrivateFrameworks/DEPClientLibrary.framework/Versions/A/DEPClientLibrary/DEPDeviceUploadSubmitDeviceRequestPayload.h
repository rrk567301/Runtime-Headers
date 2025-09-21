@class NSString, DEPDeviceUploadRequestType, DEPDeviceUploadUser;

@interface DEPDeviceUploadSubmitDeviceRequestPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *orgId;
@property (readonly, nonatomic) NSString *orgName;
@property (readonly, nonatomic) DEPDeviceUploadRequestType *requestType;
@property (readonly, nonatomic) DEPDeviceUploadUser *submitter;
@property (readonly, nonatomic) DEPDeviceUploadUser *approver;
@property (readonly, nonatomic) NSString *soldToId;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOrgId:(id)a0 orgName:(id)a1 requestType:(id)a2 submitter:(id)a3 approver:(id)a4 soldToId:(id)a5;

@end
