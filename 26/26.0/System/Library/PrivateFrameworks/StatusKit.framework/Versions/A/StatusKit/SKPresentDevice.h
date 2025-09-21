@class NSString, SKPresencePayload, NSDate, SKHandle;

@interface SKPresentDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSelfDevice;
@property (readonly, nonatomic) BOOL isSelfHandle;
@property (readonly, nonatomic) SKHandle *handle;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *deviceTokenURI;
@property (readonly, nonatomic) SKPresencePayload *presencePayload;
@property (readonly, nonatomic) NSDate *assertionTime;

+ (id)logger;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 deviceIdentifier:(id)a1 deviceTokenURI:(id)a2 payload:(id)a3 assertionTime:(id)a4 selfHandle:(BOOL)a5 selfDevice:(BOOL)a6;

@end
