@class NSData, NSString;

@interface CATAddress : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isAny) BOOL any;
@property (readonly, nonatomic, getter=isLocalWiFi) BOOL localWiFi;

+ (id)any;
+ (id)localWiFi;

- (BOOL)isEqualToAddress:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
