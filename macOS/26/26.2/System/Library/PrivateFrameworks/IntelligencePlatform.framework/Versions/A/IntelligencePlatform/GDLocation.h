@class NSArray, GDEntityIdentifier;

@interface GDLocation : NSObject <GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) NSArray *names;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTriplesIterator:(id)a0;

@end
