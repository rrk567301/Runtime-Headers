@class ISS_DAVXMLNode, NSMutableArray, NSMutableData;

@interface ISS_DAVXMLTree : NSObject {
    ISS_DAVXMLNode *root;
    NSMutableArray *stack;
    NSMutableData *contentData;
}

+ (void)initialize;
+ (id)treeWithXMLData:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)root;
- (id)initWithXMLData:(id)a0;
- (void)_startelement:(const char *)a0 attributes:(const char **)a1;
- (void)_endelement:(const char *)a0;
- (void)_data:(const char *)a0 len:(int)a1;

@end
