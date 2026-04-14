@class NSString;

@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMode:(id)a0;
- (id)coreAnalyticsDictionary;
- (id)powerset;

@end
