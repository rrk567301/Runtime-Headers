@class NSArray;

@interface ML3ItemTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)columns;
- (id)name;
- (void).cxx_destruct;

@end
