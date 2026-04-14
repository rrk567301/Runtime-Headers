@class NSString;

@interface MTLResidencySetDescriptor : NSObject <NSCopying> {
    BOOL _evictsImmediately;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long initialCapacity;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)dealloc;
- (BOOL)commitsImmediately;
- (BOOL)evictsImmediately;
- (void)setCommitsImmediately:(BOOL)a0;
- (void)setEvictsImmediately:(BOOL)a0;

@end
