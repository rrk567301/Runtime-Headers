@class NSMutableSet, NSMutableArray;

@interface WFWhitelistSiteBuffer : NSObject {
    unsigned long long maxSize;
}

@property (retain) NSMutableSet *siteSet;
@property (retain) NSMutableArray *siteBuffer;
@property unsigned long long maxSize;

- (id)description;
- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (BOOL)containsMetasitePrefixOfURLString:(id)a0;
- (void)trimToSize:(unsigned long long)a0;

@end
