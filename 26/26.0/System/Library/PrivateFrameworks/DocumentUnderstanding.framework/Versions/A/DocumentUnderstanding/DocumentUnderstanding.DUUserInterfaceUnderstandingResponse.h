@class NSArray, _TtC21DocumentUnderstanding11DUDebugInfo;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying> {
    void /* function */ foundEntities;
}

@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
