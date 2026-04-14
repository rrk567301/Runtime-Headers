@class CHIPAttributePath;

@interface CHIPAttributeReport : NSObject

@property (readonly, nonatomic) CHIPAttributePath *path;
@property (readonly, nonatomic) id value;

- (void).cxx_destruct;
- (id)initWithPath:(const struct ConcreteDataAttributePath { unsigned short x0; unsigned int x1; unsigned int x2; unsigned short x3; int x4; } *)a0 value:(id)a1;

@end
