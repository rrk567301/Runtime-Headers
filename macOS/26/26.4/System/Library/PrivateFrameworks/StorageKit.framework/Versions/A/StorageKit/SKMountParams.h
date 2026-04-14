@class NSURL, NSSet;

@interface SKMountParams : NSObject <NSCopying>

@property (nonatomic) BOOL recursive;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL raidTraverse;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL noBrowse;
@property (copy, nonatomic) NSURL *mountPoint;
@property (retain, nonatomic) NSSet *allParams;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParams:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)redactedDescription;

@end
