@interface ABMetadataValidateOperation : ABMetadataOperation {
    char _forceRebuild;
}

- (void)main;
- (id)initWithMetadataManager:(id)a0 andForceRebuild:(char)a1;

@end
