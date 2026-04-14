@class NSString, SKPresencePayload, NSDate, SKHandle;

@interface SKPresentDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isPresent;
@property (nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) BOOL isSelfDevice;
@property (readonly, nonatomic) BOOL isSelfHandle;
@property (readonly, nonatomic) SKHandle *handle;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *deviceTokenURI;
@property (readonly, nonatomic) SKPresencePayload *presencePayload;
@property (readonly, nonatomic) NSDate *assertionTime;
@property (readonly, nonatomic) NSDate *serverOriginatedTime;

+ (id)logger;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithHandle:(id)a0 deviceIdentifier:(id)a1 deviceTokenURI:(id)a2 payload:(id)a3 assertionTime:(id)a4 serverOriginatedTime:(id)a5 selfHandle:(BOOL)a6 selfDevice:(BOOL)a7 isPresent:(BOOL)a8 sequenceNumber:(unsigned long long)a9;

@end
