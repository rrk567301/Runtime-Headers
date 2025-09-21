@class NSString, NSURL;

@interface PLResourceXPCRequest : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *taskIdentifier;
@property (readonly, nonatomic) NSURL *assetObjectIDURL;
@property (nonatomic) char wantsProgress;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1;
- (id)initWithTaskIdentifier:(id)a0 assetObjectIDURL:(id)a1;

@end
