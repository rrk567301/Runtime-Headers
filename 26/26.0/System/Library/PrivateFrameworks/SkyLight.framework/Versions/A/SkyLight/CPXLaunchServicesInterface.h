@class NSArray;

@interface CPXLaunchServicesInterface : NSObject {
    int _sessionID;
}

@property (readonly, nonatomic) int sessionID;
@property (readonly, nonatomic) unsigned int frontApplicationSeed;
@property (readonly, nonatomic) id frontApplication;
@property (readonly, nonatomic) NSArray *runningApplications;
@property (readonly, nonatomic) NSArray *permittedFrontApplications;

- (id)initWithSessionID:(int)a0;
- (int)addToPermittedFrontASNList:(struct __LSASN { } *)a0;
- (int)applicationInformationSeed:(struct __LSASN { } *)a0;
- (unsigned char)applicationType:(struct __LSASN { } *)a0;
- (int)removeFromPermittedFrontASNList:(struct __LSASN { } *)a0;
- (int)setFrontApplication:(struct __LSASN { } *)a0;

@end
