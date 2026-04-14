@class NSString;

@interface MTLResidencySetDescriptor : NSObject <NSCopying> {
    BOOL _evictsImmediately;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long initialCapacity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;
- (BOOL)commitsImmediately;
- (BOOL)evictsImmediately;
- (void)setCommitsImmediately:(BOOL)a0;
- (void)setEvictsImmediately:(BOOL)a0;

@end
