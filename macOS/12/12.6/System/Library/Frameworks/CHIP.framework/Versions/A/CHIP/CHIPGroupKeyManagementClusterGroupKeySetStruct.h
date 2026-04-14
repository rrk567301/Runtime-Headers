@class NSNumber, NSData;

@interface CHIPGroupKeyManagementClusterGroupKeySetStruct : NSObject

@property (retain, nonatomic) NSNumber *groupKeySetID;
@property (retain, nonatomic) NSNumber *groupKeySecurityPolicy;
@property (retain, nonatomic) NSData *epochKey0;
@property (retain, nonatomic) NSNumber *epochStartTime0;
@property (retain, nonatomic) NSData *epochKey1;
@property (retain, nonatomic) NSNumber *epochStartTime1;
@property (retain, nonatomic) NSData *epochKey2;
@property (retain, nonatomic) NSNumber *epochStartTime2;

- (id)init;
- (void).cxx_destruct;

@end
