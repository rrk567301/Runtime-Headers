@class NSDictionary, NSObject;
@protocol OS_nw_path;

@interface CPLNetworkState : NSObject

@property (readonly, nonatomic) NSObject<OS_nw_path> *networkPath;
@property (readonly, nonatomic, getter=isConnected) char connected;
@property (readonly, nonatomic, getter=isConstrained) char constrained;
@property (readonly, nonatomic, getter=isCellular) char cellular;
@property (readonly, nonatomic, getter=isCellularRestricted) char cellularRestricted;
@property (readonly, nonatomic, getter=isInAirplaneMode) char inAirplaneMode;
@property (readonly, nonatomic) char canUseNetwork;
@property (readonly, nonatomic) NSDictionary *plistDescription;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithNetworkPath:(id)a0 cellularRestricted:(char)a1 inAirplaneMode:(char)a2;
- (char)isFunctionallyEqual:(id)a0;

@end
