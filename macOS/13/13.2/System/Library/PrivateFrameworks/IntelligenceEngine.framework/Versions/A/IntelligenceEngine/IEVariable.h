@class NSString, NSObject;

@interface IEVariable : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSObject *value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 withType:(id)a1;
- (id)initWithName:(id)a0 withType:(id)a1 withValue:(id)a2;

@end
