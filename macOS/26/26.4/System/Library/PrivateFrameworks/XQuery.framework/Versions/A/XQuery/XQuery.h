@class XQueryInternal;

@interface XQuery : NSObject {
    XQueryInternal *_internal;
}

+ (id)xqueryWithSource:(id)a0;

- (void)finalize;
- (id)initWithSource:(id)a0;
- (id)_internal;
- (void)dealloc;
- (id)parseErrors;

@end
