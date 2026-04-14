@class NSString;

@interface PKScript : NSObject <NSCopying>

@property (copy) NSString *path;
@property double estimatedRunningTime;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPath:(id)a0;
- (id)initWithPath:(id)a0 estimatedRunningTime:(double)a1;

@end
