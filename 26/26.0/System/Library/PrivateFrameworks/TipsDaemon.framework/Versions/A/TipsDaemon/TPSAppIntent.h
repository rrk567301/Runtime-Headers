@class NSString;

@interface TPSAppIntent : TPSSerializableObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) id value;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
