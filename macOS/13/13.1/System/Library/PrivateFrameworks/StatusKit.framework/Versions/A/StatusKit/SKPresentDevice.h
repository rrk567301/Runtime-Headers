@class NSString, SKPresencePayload, NSDate, SKHandle;

@interface SKPresentDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSelfDevice;
@property (readonly, nonatomic) BOOL isSelfHandle;
@property (readonly, nonatomic) SKHandle *handle;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) SKPresencePayload *presencePayload;
@property (readonly, nonatomic) NSDate *assertionTime;

+ (id)logger;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 deviceIdentifier:(id)a1 payload:(id)a2 assertionTime:(id)a3 selfHandle:(BOOL)a4 selfDevice:(BOOL)a5;

@end
