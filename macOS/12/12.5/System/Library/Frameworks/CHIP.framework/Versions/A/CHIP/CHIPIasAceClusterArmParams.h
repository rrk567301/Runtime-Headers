@class NSNumber, NSString;

@interface CHIPIasAceClusterArmParams : NSObject

@property (retain, nonatomic) NSNumber *armMode;
@property (retain, nonatomic) NSString *armDisarmCode;
@property (retain, nonatomic) NSNumber *zoneId;

- (id)init;
- (void).cxx_destruct;

@end
