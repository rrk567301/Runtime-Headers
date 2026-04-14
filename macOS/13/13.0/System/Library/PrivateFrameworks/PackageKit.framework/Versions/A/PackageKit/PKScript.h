@class NSString;

@interface PKScript : NSObject <NSCopying>

@property (copy) NSString *path;
@property double estimatedRunningTime;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPath:(id)a0;
- (id)initWithPath:(id)a0 estimatedRunningTime:(double)a1;

@end
