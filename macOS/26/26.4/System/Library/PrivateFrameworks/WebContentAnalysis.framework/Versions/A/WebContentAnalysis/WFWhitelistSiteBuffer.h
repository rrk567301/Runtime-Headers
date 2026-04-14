@class NSMutableSet, NSMutableArray;

@interface WFWhitelistSiteBuffer : NSObject {
    unsigned long long maxSize;
}

@property (retain) NSMutableSet *siteSet;
@property (retain) NSMutableArray *siteBuffer;
@property unsigned long long maxSize;

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (BOOL)containsMetasitePrefixOfURLString:(id)a0;
- (void)trimToSize:(unsigned long long)a0;

@end
