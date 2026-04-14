@class NSString, NSArray, DDLocation;

@interface DDAbstractType : NSObject

@property (readonly) BOOL isEmpty;
@property (readonly) BOOL isAny;
@property (readonly) BOOL isFlatName;
@property (readonly) int kind;
@property (readonly) NSString *name;
@property (readonly) NSArray *arguments;
@property (retain) DDLocation *location;

+ (id)emptyType;
+ (id)anyType;
+ (id)typeWithName:(id)a0 components:(id)a1 kind:(int)a2 location:(id)a3;
+ (id)typeWithName:(id)a0 component:(id)a1 kind:(int)a2 location:(id)a3;

- (void)dealloc;
- (id)description;
- (id)argument;
- (id)initWithNameType:(id)a0;
- (id)initWithOptional:(id)a0;
- (id)initWithConjunctionArg1:(id)a0 arg2:(id)a1;
- (id)initWithDisjunctionArg1:(id)a0 arg2:(id)a1;
- (id)initWithName:(id)a0 components:(id)a1 kind:(int)a2 location:(id)a3;
- (void)appendDescription:(id)a0;
- (void)_appendComponents:(id)a0;
- (id)verboseDescription;
- (id)computeInhabitant:(id)a0;

@end
