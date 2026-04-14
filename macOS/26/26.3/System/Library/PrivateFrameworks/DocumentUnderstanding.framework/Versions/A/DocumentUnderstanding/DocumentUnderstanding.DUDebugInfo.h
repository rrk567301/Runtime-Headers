@class NSString;

@interface DocumentUnderstanding.DUDebugInfo : NSObject <NSCoding, NSCopying> {
    void /* function */ debugString;
}

@property (nonatomic, copy) NSString *debugString;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end
