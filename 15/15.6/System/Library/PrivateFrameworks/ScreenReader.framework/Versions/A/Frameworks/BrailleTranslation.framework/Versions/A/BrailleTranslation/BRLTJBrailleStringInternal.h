@class NSString;

@interface BRLTJBrailleStringInternal : BRLTJEditableStringInternal {
    void /* unknown type, empty encoding */ stage;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSStage;
@property (nonatomic, readonly) char isStageEmpty;
@property (nonatomic, readonly) NSString *stageString;
@property (nonatomic, readonly) NSString *stageSignalledString;
@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (char)isEqual:(id)a0;

@end
