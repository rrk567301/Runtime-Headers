@class NSString, NSDictionary, NSArray, IENLParameters;

@interface IEIntent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *intentId;
@property (retain, nonatomic) NSDictionary *slots;
@property (retain, nonatomic) NSArray *parsers;
@property (retain, nonatomic) IENLParameters *producer;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 withId:(id)a1;

@end
