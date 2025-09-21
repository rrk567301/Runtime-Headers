@class NSData, NSString;

@interface CATAddress : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic, getter=isAny) char any;
@property (readonly, nonatomic, getter=isLocalWiFi) char localWiFi;

+ (id)any;
+ (id)localWiFi;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0;
- (char)isEqualToAddress:(id)a0;

@end
