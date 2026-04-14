@class NSString, NSDictionary;

@interface IEIntent : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *intentId;
@property (retain, nonatomic) NSDictionary *slots;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 withId:(id)a1;

@end
