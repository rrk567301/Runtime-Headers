@class NSNumber, NSString, NSArray;

@interface CHIPContentLauncherClusterParameter : NSObject

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) NSArray *externalIDList;

- (id)init;
- (void).cxx_destruct;

@end
