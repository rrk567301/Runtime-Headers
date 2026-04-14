@class XQueryInternal;

@interface XQuery : NSObject {
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)a0;

- (void)finalize;
- (id)_internal;
- (id)initWithSource:(id)a0;
- (void)dealloc;
- (id)parseErrors;

@end
