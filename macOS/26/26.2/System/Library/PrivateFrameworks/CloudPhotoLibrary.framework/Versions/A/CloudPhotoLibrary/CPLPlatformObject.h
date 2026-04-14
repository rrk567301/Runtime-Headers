@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (void).cxx_destruct;
- (id)initWithAbstractObject:(id)a0;
- (id)description;
- (id)init;

@end
