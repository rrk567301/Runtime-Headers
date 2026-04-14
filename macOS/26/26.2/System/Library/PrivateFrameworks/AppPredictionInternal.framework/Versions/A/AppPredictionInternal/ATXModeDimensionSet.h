@class NSString;

@interface ATXModeDimensionSet : _ATXCoreAnalyticsDimensionSet

@property (readonly, nonatomic) NSString *mode;

- (id)initWithMode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)powerset;

@end
