@class NSString, NSDate;

@interface FPDRequest : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *userProcessName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic, getter=isFromPOSIX) char fromPOSIX;
@property (nonatomic) char selectedForMaterialization;
@property (nonatomic) char shouldFailCoordinationIfDownloadRequired;
@property (nonatomic) struct { long long location; long long length; } requestedExtent;
@property (nonatomic) struct { long long location; long long length; } providedExtent;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) char allowsResurrection;
@property (nonatomic, getter=isProviderInitiated) char providerInitiated;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDate *date;
@property (nonatomic) struct { unsigned int val[8]; } audit_token;

+ (id)UUIDForSystemExecutablePath:(id)a0;
+ (id)fixupProcessName:(id)a0;
+ (id)requestForPID:(int)a0;
+ (id)requestForPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(char)a2;
+ (id)requestForPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(char)a2 kernelFileInfo:(id)a3;
+ (id)requestForPID:(int)a0 fromPOSIX:(char)a1;
+ (id)requestForPID:(int)a0 fromPOSIX:(char)a1 kernelFileInfo:(id)a2;
+ (id)requestForSelf;
+ (id)requestForXPCConnection:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 fromPOSIX:(char)a2 withExtent:(struct { long long x0; long long x1; })a3;
- (char)isPermittedToAttributeRequestingExecutable:(id)a0;
- (id)nsfpRequestForSession:(id)a0;
- (id)nsfpRequestForSession:(id)a0 isSpeculative:(char)a1;

@end
