@class NSString, NSArray;

@interface DSPModuleControlDescription : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSArray *inputIOStreamIndices;
@property (readonly, nonatomic) NSArray *outputIOStreamIndices;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1 inputIOStreamIndices:(id)a2 outputIOStreamIndices:(id)a3;

@end
