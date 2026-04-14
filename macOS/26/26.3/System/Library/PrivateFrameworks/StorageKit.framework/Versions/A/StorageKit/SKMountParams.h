@class NSURL, NSSet;

@interface SKMountParams : NSObject <NSCopying>

@property (nonatomic) BOOL recursive;
@property (nonatomic) BOOL force;
@property (nonatomic) BOOL raidTraverse;
@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL noBrowse;
@property (copy, nonatomic) NSURL *mountPoint;
@property (retain, nonatomic) NSSet *allParams;

- (id)dictionaryRepresentation;
- (id)description;
- (id)init;
- (id)initWithParams:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
