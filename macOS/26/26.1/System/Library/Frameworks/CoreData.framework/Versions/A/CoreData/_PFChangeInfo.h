@class _NSDefaultSectionInfo, NSManagedObject, NSIndexPath;

@interface _PFChangeInfo : NSObject {
    unsigned long long _changeType;
    NSIndexPath *_startIndexPath;
    NSIndexPath *_finalIndexPath;
    _NSDefaultSectionInfo *_startSectionInfo;
    _NSDefaultSectionInfo *_finalSectionInfo;
}

@property (readonly, retain, nonatomic) NSManagedObject *object;

- (unsigned long long)hash;
- (id)initWithObject:(id)a0;
- (id)description;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
