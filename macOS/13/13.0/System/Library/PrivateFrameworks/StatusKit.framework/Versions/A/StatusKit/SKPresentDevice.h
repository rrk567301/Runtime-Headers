@class NSString, SKHandle, NSDate;

@interface SKPresentDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isSelfDevice;
@property (readonly, nonatomic) BOOL isSelfHandle;
@property (readonly, nonatomic) SKHandle *handle;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSDate *assertionTime;

+ (id)logger;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 deviceIdentifier:(id)a1 assertionTime:(id)a2 selfHandle:(BOOL)a3 selfDevice:(BOOL)a4;

@end
