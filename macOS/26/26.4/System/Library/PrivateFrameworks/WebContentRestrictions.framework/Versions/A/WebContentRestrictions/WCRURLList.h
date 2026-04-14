@class NSMutableArray;

@interface WCRURLList : NSObject

@property (retain) NSMutableArray *urlStringList;

+ (id)_formattedStringFromURLString:(id)a0 fromBrowser:(BOOL)a1 removePort:(BOOL)a2;

- (void).cxx_destruct;
- (id)init;
- (void)addURLString:(id)a0;
- (BOOL)containsURLString:(id)a0;
- (id)allowedURLStrings;

@end
