@class NSData;

@interface FPSpotlightIndexState : NSObject

@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) NSData *lastPage;
@property (readonly, nonatomic) NSData *lastChangeToken;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (BOOL)supportsSecureCoding;
+ (id)stateWithData:(id)a0;

- (id)initWithPage:(id)a0 changeToken:(id)a1;
- (id)init;
- (id)initWithChangeToken:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
