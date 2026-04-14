@class NSArray, NSString;

@interface IOCAggregateBuildDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *inputs;
@property (retain, nonatomic) NSArray *outputs;
@property (nonatomic) unsigned int enabledDirections;
@property (nonatomic) BOOL isManagedRoute;
@property (nonatomic) unsigned int sessionID;
@property (retain, nonatomic) NSString *mainDeviceUID;
@property (nonatomic) unsigned char version;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputs:(id)a0 outputs:(id)a1 enabledDirections:(unsigned int)a2 sessionID:(unsigned int)a3 isManagedRoute:(BOOL)a4 mainDeviceUID:(id)a5;

@end
