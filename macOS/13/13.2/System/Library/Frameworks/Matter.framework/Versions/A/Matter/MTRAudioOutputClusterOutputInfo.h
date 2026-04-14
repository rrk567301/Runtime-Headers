@class NSNumber, NSString;

@interface MTRAudioOutputClusterOutputInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSNumber *outputType;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
