@class NSArray, _TtC21DocumentUnderstanding11DUDebugInfo;

@interface DocumentUnderstanding.DUUserInterfaceUnderstandingResponse : NSObject <NSCoding, NSCopying> {
    void /* function */ foundEntities;
}

@property (nonatomic, copy) NSArray *foundEntities;
@property (nonatomic, retain) _TtC21DocumentUnderstanding11DUDebugInfo *responseDebugInfo;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;

@end
