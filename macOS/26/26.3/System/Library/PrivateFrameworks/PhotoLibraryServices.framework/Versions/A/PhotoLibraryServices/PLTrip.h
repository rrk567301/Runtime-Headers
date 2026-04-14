@class NSArray;

@interface PLTrip : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSArray *items;

- (double)duration;
- (id)description;
- (void).cxx_destruct;
- (id)typeDescription;
- (id)initWithItems:(id)a0 type:(unsigned long long)a1;

@end
