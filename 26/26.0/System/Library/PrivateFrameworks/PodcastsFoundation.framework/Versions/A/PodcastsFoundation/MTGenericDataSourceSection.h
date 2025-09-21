@interface MTGenericDataSourceSection : NSObject {
    void /* unknown type, empty encoding */ storedTitle;
    void /* function */ shouldIncludeSeeAllBlock;
}

@property (nonatomic, copy) id /* block */ shouldIncludeSeeAllBlock;

- (id)initWithTitle:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
