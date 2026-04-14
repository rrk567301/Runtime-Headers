@class NSURL, BMResourceSpecifier, BMResourceContainer;

@interface CCDataResource : NSObject <NSCopying>

@property (readonly, nonatomic) BMResourceSpecifier *specifier;
@property (readonly, nonatomic) BMResourceContainer *container;
@property (readonly, nonatomic) NSURL *resourceDirectoryURL;
@property (readonly, nonatomic) NSURL *databaseDirectoryURL;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) int protectionClass;

+ (id)dataResourceForSet:(id)a0 inContainer:(id)a1;
+ (id)_databaseDirectoryURLFromResourceDirectoryURL:(id)a0;
+ (BOOL)_databaseExistsAtURL:(id)a0 error:(id *)a1;
+ (id)dataResourceFromSpecifier:(id)a0 inContainer:(id)a1;
+ (id)databaseURLFromParentDirectoryURL:(id)a0;
+ (BOOL)directoryContainsDataResource:(id)a0;
+ (BOOL)enumerateDataResources:(id *)a0 setIdentifier:(id)a1 descriptors:(id)a2 container:(id)a3 includingTombstoned:(BOOL)a4 startAfterSet:(id)a5 sorted:(BOOL)a6 usingBlock:(id /* block */)a7;
+ (BOOL)enumerateSetPartitionsWithIdentifier:(id)a0 descriptors:(id)a1 container:(id)a2 startAfterSet:(id)a3 sorted:(BOOL)a4 error:(id *)a5 usingBlock:(id /* block */)a6;

- (int)protectionClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)clearTombstoneStatus:(id *)a0;
- (BOOL)tombstoneResource:(id *)a0;
- (BOOL)databaseFileExists:(id *)a0;
- (id)initWithSpecifier:(id)a0 container:(id)a1 resourceDirectoryURL:(id)a2;
- (BOOL)markTombstoned:(id)a0 error:(id *)a1;
- (unsigned char)resourceStatus;
- (id)setWithError:(id *)a0;
- (id)tombstoneDate:(id *)a0;

@end
