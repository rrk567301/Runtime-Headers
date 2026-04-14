@class NSArray, NSString;

@interface VZBridgedNetworkInterface : NSObject

@property (class, readonly, copy) NSArray *networkInterfaces;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedDisplayName;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
