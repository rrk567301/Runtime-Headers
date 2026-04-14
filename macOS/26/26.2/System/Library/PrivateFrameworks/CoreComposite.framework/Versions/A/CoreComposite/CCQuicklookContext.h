@class NSString, NSMutableArray;

@interface CCQuicklookContext : NSObject {
    NSString *_folder;
    NSString *_prefix;
    NSMutableArray *_recursiveName;
}

@property (nonatomic) BOOL verbose;
@property (nonatomic) unsigned long long maxElementsToConsiderArrayVerbose;
@property (nonatomic) int defaultImageWidth;

- (void).cxx_destruct;
- (id)init;
- (id)contextPath;
- (id)toHtml:(id)a0;
- (id)absoluteResourceFilePath:(id)a0;
- (id)initForFolder:(id)a0;
- (id)initForFolder:(id)a0 andPrefix:(id)a1;
- (void)popRecursiveName;
- (void)pushRecursiveName:(id)a0;
- (id)recursiveName;
- (id)relativeResourceFilePath:(id)a0;

@end
