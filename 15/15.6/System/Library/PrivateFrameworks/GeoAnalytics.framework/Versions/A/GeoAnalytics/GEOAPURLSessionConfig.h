@interface GEOAPURLSessionConfig : NSObject

@property (nonatomic) int type;
@property (nonatomic) int noCellAuthType;
@property (nonatomic) char requireWifi;
@property (nonatomic) char requirePower;
@property (nonatomic) char discretionary;

+ (id)allSessionConfigTypes;
+ (id)configForURLSessionConfigType:(int)a0;

@end
