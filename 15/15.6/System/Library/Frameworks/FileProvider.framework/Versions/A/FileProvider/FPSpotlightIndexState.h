@class NSData;

@interface FPSpotlightIndexState : NSObject

@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) NSData *lastPage;
@property (readonly, nonatomic) NSData *lastChangeToken;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (char)supportsSecureCoding;
+ (id)stateWithData:(id)a0;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithChangeToken:(id)a0;
- (id)initWithPage:(id)a0 changeToken:(id)a1;

@end
