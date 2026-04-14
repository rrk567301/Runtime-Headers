@class NSArray, NSDictionary;

@interface CRDevice : NSObject

@property (nonatomic) BOOL supportElabel;
@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) NSDictionary *typeToComponent;
@property (retain, nonatomic) NSDictionary *spcToComponent;

- (void).cxx_destruct;
- (id)initWithComponents:(id)a0;
- (id)getComponentBySPC:(id)a0;
- (id)getComponentByType:(int)a0;
- (BOOL)populateLookupDictionary:(id)a0;

@end
