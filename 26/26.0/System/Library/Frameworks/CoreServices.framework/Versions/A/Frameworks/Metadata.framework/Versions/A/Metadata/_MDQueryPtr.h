@interface _MDQueryPtr : NSObject {
    struct __MDQuery { } *_query;
}

- (struct __MDQuery { } *)query;
- (void)dealloc;
- (id)initWithQuery:(struct __MDQuery { } *)a0;

@end
