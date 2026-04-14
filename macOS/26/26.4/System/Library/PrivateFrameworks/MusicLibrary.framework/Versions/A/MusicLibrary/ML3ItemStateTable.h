@class NSArray;

@interface ML3ItemStateTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)columns;
- (id)name;
- (void).cxx_destruct;
- (id)uniqueConstraints;

@end
