@class NSMutableArray;

@interface CNCDRemotePersistentStoreEndpointFetchResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMutableArray *endpoints;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoints:(id)a0;

@end
