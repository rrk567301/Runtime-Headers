@class NSArray, GDEntityIdentifier;

@interface GDSoftware : NSObject <GDTripleIteratorEntityRenderer, GDEntity>

@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) GDEntityIdentifier *entityIdentifier;

+ (unsigned long long)triplesColumnsRequiredForRendering;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTriplesIterator:(id)a0;

@end
