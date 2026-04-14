@class NSSet, CUMessageSession, AISSetupContext;

@interface SKAISSetupContext : NSObject

@property (retain, nonatomic) NSSet *requiredServiceTypes;
@property (retain, nonatomic) NSSet *desiredServiceTypes;
@property (nonatomic) unsigned long long localRole;
@property (nonatomic) unsigned long long remoteRole;
@property (nonatomic) BOOL shouldSkipConfirmation;
@property (retain, nonatomic) CUMessageSession *messageSessionTemplate;
@property (readonly, nonatomic) AISSetupContext *underlyingObject;

- (void).cxx_destruct;

@end
