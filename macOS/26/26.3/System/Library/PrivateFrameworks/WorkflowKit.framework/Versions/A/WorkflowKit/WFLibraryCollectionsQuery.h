@class NSString;

@interface WFLibraryCollectionsQuery : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ groupingType;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (id)sortedVisibleFolders;
+ (id)sortedGroupings;

- (id)init;
- (id)copyWithZone:(void *)a0;
- (id)performReturningCollectionsIn:(id)a0 database:(id)a1;
- (id)performReturningCountIn:(id)a0 database:(id)a1;

@end
