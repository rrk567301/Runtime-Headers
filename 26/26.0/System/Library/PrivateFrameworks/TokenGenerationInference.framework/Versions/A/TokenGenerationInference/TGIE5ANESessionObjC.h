@class NSURL, NSString;

@interface TGIE5ANESessionObjC : NSObject

@property (readonly, nonatomic) NSURL *resourceURL;
@property (readonly, nonatomic) BOOL useEnergyEfficientMode;
@property (readonly, copy, nonatomic) NSString *assetIdentifier;

+ (void)sendStartSignalForResource:(id)a0 useEnergyEfficientMode:(BOOL)a1 assetIdentifier:(id)a2;
+ (void)sendStopSignalForResource:(id)a0;

- (void)dealloc;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithResourceURL:(id)a0 useEnergyEfficientMode:(BOOL)a1 assetIdentifier:(id)a2;

@end
