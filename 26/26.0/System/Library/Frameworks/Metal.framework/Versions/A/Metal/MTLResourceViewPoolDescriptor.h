@class NSString;

@interface MTLResourceViewPoolDescriptor : NSObject <NSCopying> {
    BOOL _forceBaseResourceID;
    unsigned long long _baseResourceID;
}

@property (nonatomic) BOOL forceBaseResourceID;
@property (nonatomic) unsigned long long baseResourceID;
@property (nonatomic) unsigned long long resourceViewCount;
@property (copy, nonatomic) NSString *label;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
