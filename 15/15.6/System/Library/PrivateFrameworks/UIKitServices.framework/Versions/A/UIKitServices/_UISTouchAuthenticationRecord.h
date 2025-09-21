@class NSDictionary, BKSWindowServerHitTestSecurityAnalysis, NSString;

@interface _UISTouchAuthenticationRecord : NSObject <BSDescriptionStreamable, NSCopying> {
    BKSWindowServerHitTestSecurityAnalysis *_securityAnalysis;
    NSString *_hostBundleId;
    NSString *_hostSDKVersion;
    char _hostIsInternal;
    NSString *_serviceBundleId;
    long long _serviceInstanceIdentifier;
    unsigned long long _creationTime;
}

@property (readonly, nonatomic) NSDictionary *sysdiagnosePayload;
@property (readonly, nonatomic) double timeSinceCreation;
@property (readonly, nonatomic) char passesSecurityAnalysis;
@property (readonly, nonatomic) BKSWindowServerHitTestSecurityAnalysis *securityAnalysis;
@property (readonly, copy, nonatomic) NSString *hostBundleId;
@property (readonly, copy, nonatomic) NSString *hostSDKVersion;
@property (readonly, nonatomic) char hostIsInternal;
@property (readonly, copy, nonatomic) NSString *serviceBundleId;
@property (readonly, nonatomic) long long serviceInstanceIdentifier;
@property (readonly, nonatomic) char shouldAllowEvents;
@property (nonatomic) char eventLeadToSensitiveDataTransmission;
@property (readonly, nonatomic) char touchIsAuthentic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (char)shouldAuthenticateServiceBundleId:(id)a0;
+ (id)build:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)_initWithCopyOf:(id)a0;
- (id)analyticsPayloadWithDuration:(char)a0;
- (char)canCoalesceWithRecord:(id)a0;
- (id)initWithSecurityAnalysis:(id)a0 timestamp:(double)a1 hostBundleId:(id)a2 hostSDKVersion:(id)a3 hostIsInternal:(char)a4 serviceBundleId:(id)a5;

@end
