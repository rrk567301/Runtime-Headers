@class HAPTLVUnsignedNumberValue;

@interface HMNetworkRouterWANStatus : NSObject <NSCopying>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *identifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *status;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 status:(id)a1;
- (id)serializeWithError:(id *)a0;

@end
