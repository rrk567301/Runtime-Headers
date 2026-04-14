@class NSArray, _TtC21DocumentUnderstanding11DUDebugInfo;

@interface DocumentUnderstanding.DUStructuredEntityResponse : NSObject <NSCoding, NSCopying> {
    void /* function */ structuredEntities;
}

@property (nonatomic, copy) NSArray *structuredEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (id)init;

@end
