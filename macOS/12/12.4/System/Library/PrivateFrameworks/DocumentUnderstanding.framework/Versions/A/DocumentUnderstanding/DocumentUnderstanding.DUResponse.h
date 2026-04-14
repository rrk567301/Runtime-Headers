@interface DocumentUnderstanding.DUResponse : NSObject <NSCoding, NSCopying> {
    void /* unknown type, empty encoding */ typeToResults;
}

@property (nonatomic, readonly) BOOL isEmpty;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)resultsFor:(id)a0;
- (void)insertWithResults:(id)a0 contentType:(id)a1;
- (void)removeAllResults;

@end
