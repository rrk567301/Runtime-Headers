@interface _MDQueryPtr : NSObject {
    struct __MDQuery { } *_query;
}

- (id)initWithQuery:(struct __MDQuery { } *)a0;
- (struct __MDQuery { } *)query;
- (void)dealloc;

@end
