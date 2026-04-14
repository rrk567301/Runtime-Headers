@class NSString, NSArray, DDLocation;

@interface DDAbstractType : NSObject

@property (readonly) BOOL isEmpty;
@property (readonly) BOOL isAny;
@property (readonly) BOOL isFlatName;
@property (readonly) int kind;
@property (readonly) NSString *name;
@property (readonly) NSArray *arguments;
@property (retain) DDLocation *location;

+ (id)typeWithName:(id)a0 components:(id)a1 kind:(int)a2 location:(id)a3;
+ (id)typeWithName:(id)a0 component:(id)a1 kind:(int)a2 location:(id)a3;
+ (id)emptyType;
+ (id)anyType;

- (void)dealloc;
- (id)description;
- (id)argument;
- (id)initWithName:(id)a0 components:(id)a1 kind:(int)a2 location:(id)a3;
- (id)initWithNameType:(id)a0;
- (id)initWithDisjunctionArg1:(id)a0 arg2:(id)a1;
- (id)initWithConjunctionArg1:(id)a0 arg2:(id)a1;
- (id)initWithOptional:(id)a0;
- (void)_appendComponents:(id)a0;
- (void)appendDescription:(id)a0;
- (id)verboseDescription;
- (id)computeInhabitant:(id)a0;

@end
