@class NSString, NSMutableDictionary, NSArray, NSDictionary, NSNumber;

@interface POJWTHeader : NSObject

@property (retain) NSMutableDictionary *data;
@property (readonly) NSString *typ;
@property (readonly) NSString *cty;
@property (readonly) NSString *alg;
@property (readonly) NSArray *x5c;
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
- (id)apu;
- (id)cty;
- (id)p2c;
- (id)x5t;
- (id)alg;
- (id)apv;
- (id)enc;
- (id)epk;
- (id)kid;
- (id)p2s;
- (id)typ;
- (id)x5c;
- (id)initWithJWTData:(id)a0;

@end
