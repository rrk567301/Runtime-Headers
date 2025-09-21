@class NSString;

@interface MTLResidencySetDescriptor : NSObject <NSCopying> {
    BOOL _evictsImmediately;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long initialCapacity;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)commitsImmediately;
- (BOOL)evictsImmediately;
- (void)setCommitsImmediately:(BOOL)a0;
- (void)setEvictsImmediately:(BOOL)a0;

@end
