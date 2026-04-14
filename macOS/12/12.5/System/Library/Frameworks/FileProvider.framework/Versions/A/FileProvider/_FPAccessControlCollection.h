@protocol FPXEnumerator;

@interface _FPAccessControlCollection : FPItemCollection {
    id<FPXEnumerator> _enumerator;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0;
- (id)createDataSourceWithSortDescriptors:(id)a0;

@end
