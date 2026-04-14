@class NSNumber;

@interface MTRWriteParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *timedWriteTimeout;
@property (copy, nonatomic) NSNumber *dataVersion;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
