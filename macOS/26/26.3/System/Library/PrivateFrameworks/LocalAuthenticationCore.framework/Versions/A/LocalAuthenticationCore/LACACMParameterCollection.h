@class NSMutableArray;

@interface LACACMParameterCollection : NSObject <NSCopying> {
    NSMutableArray *_parameters;
}

@property (readonly, nonatomic) unsigned long long parameterCount;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addParameter:(id)a0;
- (id)initWithParameter:(id)a0;
- (id)makeACMParameters;
- (id)parameterWithType:(unsigned int)a0;

@end
