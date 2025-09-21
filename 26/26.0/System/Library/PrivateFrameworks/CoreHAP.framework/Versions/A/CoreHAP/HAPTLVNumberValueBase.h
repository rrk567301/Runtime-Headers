@class NSNumber, NSString;

@interface HAPTLVNumberValueBase : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSNumber *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializeWithError:(id *)a0;
- (id)_parseFromData:(const char *)a0 length:(unsigned long long)a1 status:(int *)a2;
- (id)_serialize;

@end
