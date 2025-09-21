@class NSString;

@interface MUDevice : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *deviceID;
@property (readonly, nonatomic) NSString *model;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 symbolName:(id)a1 deviceID:(id)a2 model:(id)a3;

@end
