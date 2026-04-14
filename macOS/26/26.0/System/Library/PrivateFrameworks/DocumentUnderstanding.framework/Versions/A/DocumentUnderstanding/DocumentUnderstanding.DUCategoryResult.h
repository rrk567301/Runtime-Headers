@class NSString;

@interface DocumentUnderstanding.DUCategoryResult : NSObject <NSCoding, NSCopying> {
    void /* function */ categoryIdentifier;
}

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic) double categoryConfidence;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
