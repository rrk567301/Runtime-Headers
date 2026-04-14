@interface WBSWeakReferenceWrapper : NSObject

@property (readonly, weak, nonatomic) id object;

+ (id)wrapperWithObject:(id)a0;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;

@end
