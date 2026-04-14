@interface _MDQueryPtr : NSObject {
    struct __MDQuery { } *_query;
}

- (struct __MDQuery { } *)query;
- (id)initWithQuery:(struct __MDQuery { } *)a0;
- (void)dealloc;

@end
