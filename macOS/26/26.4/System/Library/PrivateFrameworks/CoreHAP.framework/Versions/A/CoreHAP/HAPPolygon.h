@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPPolygon : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *identifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *count;
@property (retain, nonatomic) NSData *vertices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)serializeWithError:(id *)a0;
- (id)initWithIdentifier:(id)a0 count:(id)a1 vertices:(id)a2;

@end
