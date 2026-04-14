@class NSString, APOdmlServerResponse;

@interface APOdmlDESAdRecordContents : NSObject

@property (nonatomic) BOOL impressed;
@property (nonatomic) BOOL appInstalled;
@property (nonatomic) BOOL isDupe;
@property (nonatomic) BOOL tapped;
@property (readonly, nonatomic) NSString *instanceID;
@property (retain, nonatomic) APOdmlServerResponse *odmlResponse;
@property (retain, nonatomic) NSString *responseType;

- (void).cxx_destruct;

@end
