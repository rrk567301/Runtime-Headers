@class NSMutableArray;

@interface CNCDRemotePersistentStoreEndpointFetchResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSMutableArray *endpoints;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoints:(id)a0;

@end
