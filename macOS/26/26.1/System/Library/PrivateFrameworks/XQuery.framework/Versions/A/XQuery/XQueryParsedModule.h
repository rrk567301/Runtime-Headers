@class NSString, NSArray;

@interface XQueryParsedModule : NSObject {
    NSString *_version;
    NSArray *_prologItems;
    id _body;
}

+ (id)moduleWithPrologItems:(id)a0 body:(id)a1 version:(id)a2;

- (id)version;
- (id)body;
- (void)finalize;
- (void)dealloc;
- (id)initWithPrologItems:(id)a0 body:(id)a1 version:(id)a2;
- (id)prologItems;

@end
