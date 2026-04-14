@class NSString;

@interface DocumentUnderstanding.DUCategoryResult : NSObject <NSCoding, NSCopying> {
    void /* function */ categoryIdentifier;
}

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic) double categoryConfidence;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end
