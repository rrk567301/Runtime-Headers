@class NSUUID;

@interface RSKeyframeMeta : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } cameraPose;
@property (nonatomic) unsigned long long size;
@property (nonatomic) double timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
