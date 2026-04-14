@class NSString;

@interface MTLResourceViewPoolDescriptor : NSObject <NSCopying> {
    BOOL _forceBaseResourceID;
    unsigned long long _baseResourceID;
}

@property (nonatomic) BOOL forceBaseResourceID;
@property (nonatomic) unsigned long long baseResourceID;
@property (nonatomic) unsigned long long resourceViewCount;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
