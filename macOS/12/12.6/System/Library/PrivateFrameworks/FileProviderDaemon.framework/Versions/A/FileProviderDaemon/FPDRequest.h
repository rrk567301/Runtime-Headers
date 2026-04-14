@class NSString, NSDate;

@interface FPDRequest : NSObject

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSString *userProcessName;
@property (readonly, nonatomic) NSString *executablePath;
@property (readonly, nonatomic, getter=isFromPOSIX) BOOL fromPOSIX;
@property (nonatomic) BOOL selectedForMaterialization;
@property (nonatomic) struct { long long location; long long length; } requestedExtent;
@property (nonatomic) struct { long long location; long long length; } providedExtent;
@property (readonly, nonatomic) NSString *shortDescription;
@property (nonatomic) BOOL allowsResurrection;
@property (nonatomic, getter=isProviderInitiated) BOOL providerInitiated;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) struct { unsigned int val[8]; } audit_token;

+ (id)requestForSelf;
+ (id)requestForPID:(int)a0;
+ (id)requestForPID:(int)a0 fromPOSIX:(BOOL)a1 kernelFileInfo:(id)a2;
+ (id)requestForPID:(int)a0 fromPOSIX:(BOOL)a1;
+ (id)requestForXPCConnection:(id)a0;
+ (id)fixupProcessName:(id)a0;
+ (id)UUIDForExecutablePath:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)nsfpRequestForSession:(id)a0;
- (id)initWithPID:(int)a0 fromPOSIX:(BOOL)a1 withExtent:(struct { long long x0; long long x1; })a2;
- (BOOL)isPermittedToAttributeRequestingExecutable:(id)a0;

@end
