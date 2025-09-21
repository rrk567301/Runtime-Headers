@class NSString;

@interface MTLResidencySetDescriptor : NSObject <NSCopying> {
    char _evictsImmediately;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned long long initialCapacity;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)commitsImmediately;
- (char)evictsImmediately;
- (void)setCommitsImmediately:(char)a0;
- (void)setEvictsImmediately:(char)a0;

@end
