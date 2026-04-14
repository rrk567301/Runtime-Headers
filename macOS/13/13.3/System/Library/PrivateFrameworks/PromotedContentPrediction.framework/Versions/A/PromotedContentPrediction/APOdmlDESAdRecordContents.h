@class NSString, APOdmlServerResponse;

@interface APOdmlDESAdRecordContents : NSObject

@property (nonatomic) BOOL appInstalled;
@property (nonatomic) BOOL isDupe;
@property (readonly, nonatomic) NSString *instanceID;
@property (retain, nonatomic) APOdmlServerResponse *odmlResponse;
@property (retain, nonatomic) NSString *responseType;
@property (nonatomic) BOOL impressed;
@property (nonatomic) BOOL tapped;

- (void).cxx_destruct;

@end
