@interface PKAutocompleteRowCache : NSObject {
    struct PKAutocompleteRowInfo { long long x0; long long x1; long long x2; } *_rowInfos;
    long long _maxRows;
}

@property (readonly, nonatomic) long long rowCount;

- (void)dealloc;
- (id)init;
- (void)addRowOfKind:(long long)a0 atRow:(long long)a1 inSection:(long long)a2;
- (struct PKAutocompleteRowInfo { long long x0; long long x1; long long x2; } *)infoForTableViewRow:(long long)a0;

@end
