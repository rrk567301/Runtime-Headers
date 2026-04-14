@class NSArray;

@interface TSPKnownFieldRepeatedDataReference : TSPKnownFieldRepeatedStringValue {
    NSArray *_allData;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;

@end
