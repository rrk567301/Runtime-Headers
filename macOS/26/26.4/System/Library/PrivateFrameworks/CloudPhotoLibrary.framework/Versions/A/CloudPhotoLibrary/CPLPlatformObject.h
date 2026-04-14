@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (id)initWithAbstractObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
