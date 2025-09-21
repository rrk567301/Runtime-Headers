@class NSString;

@interface DocumentUnderstanding.DUDebugInfo : NSObject <NSCoding, NSCopying> {
    void /* function */ debugString;
}

@property (nonatomic, copy) NSString *debugString;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
