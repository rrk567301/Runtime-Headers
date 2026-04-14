@class NSString, NSMutableDictionary, NSDictionary, NSNumber;

@interface POJWTHeader : NSObject

@property (retain) NSMutableDictionary *data;
@property (readonly) NSString *typ;
@property (readonly) NSString *cty;
@property (readonly) NSString *alg;
@property (readonly) NSString *x5c;
@property (readonly) NSString *x5t;
@property (readonly) NSString *kid;
@property (readonly) NSString *enc;
@property (readonly) NSString *p2s;
@property (readonly) NSNumber *p2c;
@property (readonly) NSDictionary *epk;
@property (readonly) NSString *apu;
@property (readonly) NSString *apv;
@property (readonly) NSDictionary *allData;

- (id)description;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)allData;
- (id)apv;
- (id)initWithJWTData:(id)a0;
- (id)typ;
- (id)cty;
- (id)alg;
- (id)x5c;
- (id)x5t;
- (id)kid;
- (id)enc;
- (id)p2s;
- (id)p2c;
- (id)epk;
- (id)apu;

@end
